#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string s;
    cin>>n>>s;
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')count1++;
        else count0++;
    }
    cout<<max(count0,count1)-min(count0,count1)<<endl;
}