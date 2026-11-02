#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    if(n>0)cout<<n<<endl;
    else{
        int first = n/10;
        int remain1 = n%10;
        int remain2 = first%10;
        int x = first-remain2+remain1;
        if(x>first)cout<<x<<endl;
        else cout<<first<<endl;
    }
}