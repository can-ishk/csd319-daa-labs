#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> greedy2n;
    for (unsigned long long i = 1; i <= (unsigned long long)2e18; i *= 2)
    //greedy dump of all powers of 2 till 2^18.
		greedy2n.push_back(to_string(i));
    int t;
    cin>>t;
    while(t--){
        string num;
        cin>>num;
        int res = num.size()+1; //worst case, remove all and append a power of two.
        for(auto p: greedy2n){
            int pi = 0, numi = 0, count = 0;
            while (numi < num.length() && pi < p.length()) {
                if(num[numi] == p[pi]){
                    count++;
                    pi++;
                }
                numi++;
            }
            int curr = (int)num.size()+ (int)p.size() - 2*count;
            if(curr<res) res = curr;
        }
        cout<<res<<"\n";
    }
    return 0;
}