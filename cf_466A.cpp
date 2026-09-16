#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;cin>>n>>m>>a>>b;
    bool use = true;
    if(m>1)use = true; 
    else use = false;
    int mini;
    int cost=0;
    if(use){
        int count=0;int cost=0;int i=0;
        for(;i<n;i+=m){
            count+=1;
            cost+=b;
        }
        if(i<=n)cost+=a*(n-i);
        else{
            i-=m;
            cost-=b;
            cost+= (n-i)*a;
        }
    }
    else{
        cost = n*a; 
    }
    cout<<cost<<endl;
}


