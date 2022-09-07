#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n, count=0;
        string s;
        cin>>n>>s;
        char mid = s[n/2];
        for(int i=n/2; i<n; i++){
            if(s[i]==mid) count++;
            else break;
        }
        //if n is odd, the middle element won't have a palindromic pair to remove as well.
        cout<<2*count-n%2<<"\n";
    }
}