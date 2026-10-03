#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int counto=0;
        int abno=0;
        for(int i=0;i<n;i++){
            if(s[i] == '(')counto++;
            else counto--;
            if(counto<0){
                abno++;
                counto=0;
            }
        }
        cout<<abno<<endl;
    }
}