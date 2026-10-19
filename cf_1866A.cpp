#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int diff = 0;
    int mindiff = INT_MAX;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0)diff = 0-x;
        else diff = x-0;
        if(diff < mindiff){
            mindiff = diff;
        }
    }
    cout<<mindiff<<endl;
}