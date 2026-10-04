#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;cin>>s;
    int score = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '1')score+=a;
        else if(s[i] == '2')score+=b;
        else if(s[i] == '3')score+=c;
        else if(s[i] == '4')score+=d;
    }
    cout<<score<<endl;
}