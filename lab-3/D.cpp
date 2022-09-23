#include <bits/stdc++.h>

using namespace std;

bool checkForSubSeq(string s1, string s2){
    int i=0,j=0;
    while(i<s1.size()){
        if(s1[i]=='0'){
            i++;
            continue;
        }
        if(s1[i]==s2[j]){
            i++;
            j++;
        }else{
            i++;
        }
        if(j==s2.size()) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    vector<int> steps(s1.size());
    for(int i=0; i<s1.size(); i++){
        int pos;
        cin>>pos;
        steps[i]=--pos;
    }
    int l=0, r=s1.size()-1;
    int step = r+1;
    while(l!=r){
        int mid=(l+r)/2;
        string check = s1;
        check[mid]='0';
        string a = s1, b = s1;
        a[l]='0';
        b[r]='0';
        if(r-l==1 and checkForSubSeq(a,s2) and !checkForSubSeq(b,s2)){
            step=r;
            break;
        }
        // cout<<l<<" "<<r<<" "<<mid<<" - ";
        if(checkForSubSeq(check,s2)){
            l=mid;
        }
        else{
            r=mid;
            if(mid<step) step=mid;
        }
        // cout<<l<<" "<<r<<" "<<mid<<"\n";
    }
    cout<<step<<"\n";
    
    return 0;
}