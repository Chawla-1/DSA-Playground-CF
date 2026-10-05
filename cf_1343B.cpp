#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n/2 %2 != 0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            vector<int> v(n);
            int j=2;int sum=0;
            for(int i=0;i<n/2;i++){
                v[i]=j;sum+=j;j+=2;
            }
            j=1;
            for(int i=n/2;i<n;i++){
                if(i == n-1){
                    v[i] = sum;
                }
                else{
                    v[i] = j;
                    sum-=j;
                    j+=2;
                }
            }
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}