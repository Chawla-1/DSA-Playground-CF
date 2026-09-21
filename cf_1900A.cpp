#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int count=0;
        int adjcount=0;
        for(int i=0;i<s.length();i++){
            if(adjcount == 3){
                break;
            }
            if(s[i] == '#'){
                adjcount=0;
            }
            else {
                adjcount++;
                count++;
            }
        }
        if(adjcount == 3)cout<<2<<endl;
        else cout<<count<<endl;
    }
}