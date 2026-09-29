#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int m;cin>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int diff = v[n-1]-v[0];
    int mini = diff;
    int i=0;
    for(int j=n-1;j<m;j++){
        diff = v[j]-v[i++];
        mini = min(mini,diff);
    }
    cout<<mini<<endl;
}