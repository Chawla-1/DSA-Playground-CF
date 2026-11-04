#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char> st;
        int turn = 0;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!st.empty() && st.top() != s[i]){
                st.pop();turn++;
            }
            else st.push(s[i]);
        }
        if(turn%2 == 0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
}