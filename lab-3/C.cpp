#include <bits/stdc++.h>

using namespace std;

int slideThroughTheStalls(vector<int> arr, int target) {
    int n=arr.size();
    int s=0;
    int ans=0;
    vector<int> T(n);
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s<=target)  ans=i+1;
        else{
           while(i-ans>0 && T[i-ans-1]>=s-target)  ans++;
        }
        if(i==0) T[i]=s;
        else T[i]=max(T[i-1],s);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c;
    cin>>n>>c;
    vector<int> capacity(n);
    for(int i=0; i<n; i++){
        cin>>capacity[i];
    }
    int i=0, j=n-1;
    int capSum = accumulate(capacity.begin(),capacity.end(),0);
    if(capSum<=c){
        cout<<n<<"\n";
    }
    else{
        int maxStalls = slideThroughTheStalls(capacity,c);
        cout<<maxStalls<<"\n";
    }    
    return 0;
}