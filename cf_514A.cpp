#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    long long x=0;
    long long place = 1;
    while(n>0){
        long long remain = n%10;
        if(remain>=5){
            if(remain == 9 && n<10) x += remain * place;
            else x += (9-remain) * place;
        }
        else x += remain * place;
        n/=10;
        place*=10;
    }
    cout<<x<<endl;
}