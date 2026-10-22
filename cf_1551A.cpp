#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int num = n - n%3;
        int one = (num/3); 
        int two = (num/3);
        if(n%3 == 1)one++;
        else if(n%3 == 2) two++; 
        cout<<one<<" "<<two<<endl;
    }
}