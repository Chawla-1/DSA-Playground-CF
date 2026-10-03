#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0)return false;
    }
    return true;
}
int main(){
    int n;cin>>n;
    int i=4,j=n-4;
    while(i<=j){
        while(isprime(i) || isprime(j)){
            i++;j--;
        }
        if(i+j == n){
            cout<<i<<" "<<j<<endl;
            break;
        }
    }
}