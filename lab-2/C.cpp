#include <bits/stdc++.h>

using namespace std;
/*
    odd + odd = even
    even + odd = odd
    number should have all odd numbers because even numbers don't affect the result.
    
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int d;
        string nums;
        cin>>d>>nums;
        vector<int> oddNums;
        for(int i=0; i<=nums.size(); i++){
            int num = nums[i]-'0';
            if(num%2==1) oddNums.push_back(num);
        }
        if(oddNums.size()<2) cout<<"-1\n";
        else cout<<oddNums[0]*10+oddNums[1]<<"\n";
        
    }
    return 0;
}