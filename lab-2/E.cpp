#include <bits/stdc++.h>

using namespace std;


void count(string s1, string s2, set<string> *strs){
    for(int i=0; i<s1.size(); i++){
            string s3 = s1.substr(0,i)+s2+s1.substr(i+1,s1.size()-i);
            cout<<s3<<"\n";
            count(s3, s2, strs);
        }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        set<string> strs;
        if(s2.find('a')!=string::npos){
            cout<<"-1\n";
            continue;
        }
        count(s1,s2,&strs);

    }
    return 0;
}