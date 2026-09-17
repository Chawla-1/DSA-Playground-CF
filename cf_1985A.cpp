#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        string t;
        cin>>s>>t;
        swap(s[0],t[0]);
        string ans = ""+s+" "+t;
        cout<<ans<<endl;
    }
}