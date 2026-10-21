#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int legs = n/4;
        if(n%4 != 0)legs+=1;
        cout<<legs<<endl;
    }
}