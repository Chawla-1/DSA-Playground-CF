#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        string s;cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(k == 0){
                break;
            }
            else{
                if(i.second %2 != 0){
                    mp[i.first]--;k--;
                }
            }
        }
        if(k>0){
            cout<<"YES"<<endl;
        }
        else{
            int count=0;
            for(auto i:mp){
                if(i.second%2 != 0){
                    count++;
                }
                if(count>1)break;
            }
            if(count>1){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
}