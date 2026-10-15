#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mini = min(mini,v[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(v[i]-mini);
        }
        cout<<sum<<endl;
    }
}