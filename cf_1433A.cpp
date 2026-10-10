#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int count=0;
        count+=10*((n%10)-1);
        if(n/10 == 0)count++;
        else if(n/100 == 0)count+=3;
        else if(n/1000 == 0)count+=6;
        else if(n/10000 == 0)count+=10;
        cout<<count<<endl;
    }
}