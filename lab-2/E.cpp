#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(s2=="a"){
            cout<<"1\n";
            continue;
        }
        unsigned long long a = 0;
        for(auto i:s2){
            if(i=='a') a++;
        }
        if(a>0){
            cout<<"-1\n";
        }
        else cout<<(((unsigned long long)1)<<s1.size())<<"\n";
    }
    return 0;
}