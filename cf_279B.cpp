#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;int t;cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    int l=0;int curr = 0;int maxi=0;
    for(int i=0;i<n;i++){
        curr+=v[i];
        if(curr>t){
            curr-=v[l];
            l++;
        }
        maxi = max(i-l+1,maxi);
    }
    cout<<maxi<<endl;
}


