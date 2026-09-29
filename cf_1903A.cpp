#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int k;cin>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k==1){
            bool sorted = true;
            for(int i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    sorted = false;
                    break;
                }
            }
            if(sorted)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}