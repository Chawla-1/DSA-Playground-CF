#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int count=0;
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            if(v[s[i]-'A'] == 0){
                count+=2;
            }
            else{
                count++;
            }
            v[s[i]-'A']++;
        }
        cout<<count<<endl;
    }
}