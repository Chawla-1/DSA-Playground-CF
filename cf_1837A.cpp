#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        bool pos = false;
        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c')pos = true;
        if(pos)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}