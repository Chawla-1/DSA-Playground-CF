#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length() % 2 != 0)cout<<"NO"<<endl;
        else{
            int j = s.length()/2;
            bool pos = true;
            for(int i=0;i<s.length()/2;i++){
                if(s[i] != s[j]){
                    pos = false;
                }
                j++;
            }
            if(pos)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}