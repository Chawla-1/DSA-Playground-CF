#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int x;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x] += x;
    }
    int maxi = 0;
    int ind = 0;
    for(auto i : mp){
        if(i.second > maxi){
            maxi = i.second;
            ind = i.first;
        }
    }
    cout<<maxi<<endl;
}