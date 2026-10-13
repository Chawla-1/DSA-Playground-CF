#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int mindiff = INT_MAX;
        int diff = 0;
        int moves = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            diff = v[i+1]-v[i];
            mindiff = min(diff,mindiff);
        }
        if(mindiff < 0)moves = 0;
        else moves = mindiff/2 +1;
        cout<<moves<<endl;
    }
}