#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        int maxi1 = max(a,max(b,max(c,d)));
        int maxi2 = -1;
        if(maxi1 != a)maxi2 = max(maxi2,a); 
        if(maxi1 != b)maxi2 = max(maxi2,b);  
        if(maxi1 != c)maxi2 = max(maxi2,c); 
        if(maxi1 != d)maxi2 = max(maxi2,d); 
        if((a == maxi1 && b == maxi2)||(a == maxi2 && b == maxi1)){
            cout<<"NO"<<endl;
        }
        else if((c == maxi1 && d == maxi2)||(c == maxi2 && d == maxi1)){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}