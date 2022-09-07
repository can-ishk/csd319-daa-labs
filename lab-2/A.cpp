#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,c;
    cin>>a>>b>>c;
    unordered_map<int,int> letters;
    bool res = true;
    if(a.size()+b.size()!=c.size()) res=false;
    if(res)
    for(auto i:c){
        letters[i]++;
    }
    for(auto i:b){
        if(!letters[i] or letters[i]<1){
            res=false;
            break;
        }
        else letters[i]--;
    }
    if(res)
    for(auto i:a){
        if(!letters[i] or letters[i]<1){
            res=false;
            break;
        }
        else letters[i]--;
    }
    res? cout<<"YES":cout<<"NO";
    return 0;
}