#include<iostream>
using namespace std;
int main(){
    int y,w;cin>>y>>w;
    int prob = 6-max(y,w) + 1;
    int total = 6;
    if(prob%2 == 0){
        prob/=2;total/=2;
    }
    if(prob%3 == 0){
        prob/=3;total/=3;
    }
    cout<<prob<<"/"<<total<<endl;
}