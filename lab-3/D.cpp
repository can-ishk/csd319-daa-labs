#include <bits/stdc++.h>

using namespace std;


bool checkForSubstr(string s1, string s2){
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
    for(int i=0; i<s1.size(); i++){
        int pos;
        cin>>pos;
        s1[--pos] = '0';
        if(checkForSubstr(s1,s2)) count++;
        else{
            cout<<count<<"\n";
            break;
        }
    }
    return 0;
}