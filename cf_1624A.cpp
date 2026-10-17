#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x;
        int maxi=0;int mini =INT_MAX;
        for(int i=0;i<n;i++){
            cin>>x;
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        cout<<maxi-mini<<endl;
    }
}