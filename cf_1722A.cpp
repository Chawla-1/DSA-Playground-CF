#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        if(n!=5){
            cout<<"NO"<<endl;
        }
        else{
            vector<int> v(5,0);
            for(char i:s){
                if(i == 'T')v[0]++;
                else if(i == 'i')v[1]++;
                else if(i == 'm')v[2]++;
                else if(i == 'u')v[3]++;
                else if(i == 'r')v[4]++;
            }
            bool pos = true;
            for(int i=0;i<5;i++){
                if(v[i] == 0){
                    pos = false;
                    break;
                }
            }
            if(pos)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}