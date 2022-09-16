#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //O(nlogn) time, O(1) space.
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0; i<n; i++){
        cin>>heights[i];
    }
    if(n<3) cout<<0<<"\n";
    else cout<<(n-1)/2<<"\n";
    sort(heights.begin(), heights.end());
    int i=0,j=n-1;
    int c = 0;
    while(c<n){
        c%2?cout<<heights[i++]:cout<<heights[j--];
        c++;
        cout<<" ";
    }
    return 0;
}