#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int count=0;
    int x = n;
    for(int i=1;i<=n;i++){
        if(i%m == 0){
            count++;
            n++;
        }
    }
    cout<<count+x<<endl;
}