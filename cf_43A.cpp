#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int counta = 0;
    int countb = 0;
    string a = "";
    string b = "";
    string c;
    for(int i=0;i<n;i++){
        cin>>c;
        if(a == "" || c == a){
            a = c;
            counta++;
        }
        else if(b == "" || c != a){
            b = c;
            countb++;
        }
    }
    if(counta > countb)cout<<a<<endl;
    else cout<<b<<endl;
}