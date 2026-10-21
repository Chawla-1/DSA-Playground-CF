#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<int> v(26,0);
        v[s[0]-'A']++;
        bool cor = true;
        for(int i=1;i<n;i++){
            if(v[s[i]-'A'] > 0 && s[i] != s[i-1]){
                cor = false;
                break;
            }
            else v[s[i]-'A']++;
        }
        if(cor)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}