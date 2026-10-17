#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,y,n;cin>>x>>y>>n;
        if(n%x == y){
            cout<<n<<endl;
        }
        else if(n%x == 0){
            cout<<n-(x-y)<<endl;
        }
        else{
            int k = n-n%x;
            if(k+y<n)cout<<k+y<<endl;
            else cout<<k-(x-y)<<endl;
        }
    }
}