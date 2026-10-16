#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int weight = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] == 2)weight+=2;
            else weight +=1;
        }
        if(weight%2 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}