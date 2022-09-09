#include <bits/stdc++.h>

using namespace std;
/*
sum of digits should be div by 2.

number shouldn't be div by two.

i.e. last digit should be odd.

*/


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        string nums;
        cin>>nums;
        int sum=0, last=d-1, odd=-1;
        while((nums[last]-'0')%2==0) last--;
        if(last<1){
            cout<<"-1\n";
            continue;
        }
        nums = nums.substr(0,last+1);
        for(int i=0; i<=last; i++){
            if(odd==-1 and (nums[i]-'0')%2) odd=i;
            sum+=nums[i]-'0';
        }
        if(sum%2==0) cout<<nums<<"\n";
        else{
            if(sum%2){
                if(odd==last){
                    cout<<"-1\n";
                    continue;
                }
                if(odd!=0 and (nums[odd-1]-'0')==0)
                    nums = nums.substr(0,odd-1)+nums.substr(odd+1,d-odd-1);
                else if ((nums[odd+1]-'0')==0)
                    nums = nums.substr(0,odd)+nums.substr(odd+2,d-odd-1);
                else nums = nums.substr(0,odd)+nums.substr(odd+1,d-odd-1);
                if(nums.size()<1 or (nums[0]-'0')==0){
                    cout<<"-1\n";
                    continue;
                }
                cout<<nums<<"\n";
                continue;
            }
        }
    }
    return 0;
}