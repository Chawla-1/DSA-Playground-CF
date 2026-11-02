#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int count=1;
        int maxi = 1;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1] <= k){
                count++;
            }
            else count=1;
            maxi = max(count,maxi);
        }
        cout<<n-maxi<<endl;
    }
}