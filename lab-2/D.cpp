#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        vector<int> books(b);
        int sum=0;
        for(int i=0; i<b; i++){
            int temp;
            cin>>temp;
            sum+=temp;
            books[i]=temp;
        }
        vector<int> sumL(b), sumR(b);
        sumL[0]=books[0];
        sumR[0]=books[b-1];
        for(int i=1; i<b; i++){
            sumL[i]+=sumL[i-1]+books[i];
            sumR[i]+=sumR[i-1]+books[b-i-1];
        }
        int i=0, j=0;
        bool found = false;
        int maxCount = 0;
        while(i+j<books.size()){
            if(sumL[i]==sumR[j] and i!=b-j-1){
                int count = i+j+2;
                if(count>maxCount) maxCount=count;
                i++;
                j++;
            }
            else if(sumL[i]<sumR[j]){
                i++;
            }
            else{
                j++;
            }
        }
        cout<<maxCount<<"\n";
    }
    return 0;
}