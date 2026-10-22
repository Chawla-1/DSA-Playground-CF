#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string t;cin>>t;
        string u;cin>>u;
        s = s+' '+t+' '+u;
        string ans = "";
        ans+=s[0];
        int count=0;
        for(int i=1;i<s.length();i++){
            if(count == 2)break;
            if(s[i] == ' '){
                count++;
                ans+=s[i+1];
            }
        }
        cout<<ans<<endl;
    }
}