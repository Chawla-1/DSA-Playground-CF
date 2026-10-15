#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int h;cin>>h;
        int m;cin>>m;
        cout<<((24-h-1)*60 + 60-m)<<endl;
    }
}