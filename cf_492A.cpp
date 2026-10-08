#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i=0;
    int lev = 0;int sum=0;
    while(n>0){
        n-=i;
        if(n<0)break;
        lev++;
        i+=lev;
    }
    cout<<lev-1<<endl;
}