#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    //they should come to the middle friend;
    cout<<max({a,b,c})-min({a,b,c});
    return 0;
}