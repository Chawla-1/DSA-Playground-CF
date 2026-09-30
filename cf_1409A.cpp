#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;cin>>a;int b;cin>>b;
        int moves = a-b;
        if(moves<0)moves = -moves;
        int count = moves/10;
        if(moves%10 != 0)count++;
        cout<<count<<endl;
    }
}