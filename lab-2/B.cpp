#include <bits/stdc++.h>

using namespace std;

/*
    each operation removes one integer.
    1 2 3 4 



*/


void print(vector<int> arr){
    for (auto i: arr) cout<<i<<" ";
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<int> nums;
        int n;
        cin>>n;
        cout<<2<<"\n";
        for(int i=0; i<n; i++) nums.push_back(i+1);
        for(int i=n-1; i>0; i--){
            cout<<nums[i]<<" "<<nums[i-1]<<"\n";
            nums[i-1]=ceil((float)(nums[i]+nums[i-1])/2);
        }          
    }
    return 0;
}