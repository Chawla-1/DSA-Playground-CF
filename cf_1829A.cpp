#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s = "codeforces";
        string t;cin>>t;
        int count=0;
        for(int i=0;i<t.length();i++){
            if(t[i] != s[i])count++;
        }
        cout<<count<<endl;
    }
}