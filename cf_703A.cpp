#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int count1=0;
    int count2=0;
    int x,y;
    while(n--){
        cin>>x>>y;
        if(x>y)count1++;
        else if(y>x)count2++;
    }
    if(count1>count2)cout<<"Mishka"<<endl;
    else if(count2>count1)cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}