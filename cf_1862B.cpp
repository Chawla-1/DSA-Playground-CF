#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        vector<int> ans(2*n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ans[0] = v[0];
        int k=1;
        for(int i=1;i<n;i++){
            if(v[i] <= v[i-1]){
                int val = min(v[i],v[i-1])-1;
                for(int j=val;j>=1;j--){
                    ans[k++]=j;
                }
                ans[k++] = v[i];
            }
            else ans[k++] = v[i];
        }
        cout<<k<<endl;
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
// 4 6 3
// 4 3 2 6 3 3