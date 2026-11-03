#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s,t;cin>>s>>t;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<n;i++)mp1[s[i]]++;
        for(int i=0;i<n;i++)mp2[t[i]]++;
        bool pos = true;
        for(int i=0;i<n;i++){
            if(mp1[t[i]] != mp2[t[i]]){
                pos = false;break;
            }
        }
        if(pos)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}