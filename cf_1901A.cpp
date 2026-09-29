#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;int x;
        cin>>n>>x;
        int diff = 0;
        int maxi = 0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            diff = v[i]-v[i-1];
            maxi = max(diff,maxi);
        }
        maxi = max(maxi,v[0]-0);
        maxi = max(maxi,2*(x-v[n-1]));
        cout<<maxi<<endl;
    }
}
