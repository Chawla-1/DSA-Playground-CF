#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int mini = 10;
        int minIND = -1;bool done = false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] == 0 && !done){
                v[i]++;
                mini = -1;minIND = -1;
                done = true;
            }
            else if(v[i]<mini){
                mini = v[i];
                minIND = i;
            }
        }
        long long pro = 1;
        for(int i=0;i<n;i++){
            if(mini != -1 && i == minIND){
                pro *= (v[i]+1);
            }
            else pro *= v[i];
        }
        cout<<pro<<endl;
    }
}