#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a,b;cin>>a>>b;
        bool pos = true;
        for(int i=0;i<n;i++){
            if((a[i] == 'R' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'R')){
                pos = false;
                break;
            }
            else if((a[i] == 'R' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'R')){
                pos = false;
                break;
            }
        }
        if(pos)cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}