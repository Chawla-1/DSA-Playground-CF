#include<iostream>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    bool wait = false;
    for(int i=n+1;i<=m;i++){
        bool prime = true;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime && i != m){
            wait = false;
            break;
        }
        else if(prime && i == m){
            wait = true;
        }
    }
    if(wait)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}