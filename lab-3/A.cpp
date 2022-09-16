#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //O(n) time, O(1) space.
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0; i<n; i++){
        cin>>heights[i];
    }
    if(n<3) cout<<0<<"\n";
    else cout<<(n-1)/2<<"\n";
    for(int i=1; i<n; i+=2){
        if(heights[i-1]<heights[i])
            swap(heights[i-1], heights[i]);
        if(i+1<n and heights[i+1]<heights[i])
            swap(heights[i+1],heights[i]);
    }
    for(auto i: heights)
        cout<<i<<" ";
    return 0;
}