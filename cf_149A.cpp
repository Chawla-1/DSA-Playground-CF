#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    vector<int> v(12);
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    int sum=0;
    int count=0;
    sort(v.begin(),v.end());
    for(int i=11;i>=0;i--){
        if(sum>=k){
            break;
        }
        else{
            sum+=v[i];
            count++;
        }
    }
    if(sum>=k)cout<<count<<endl;
    else cout<<-1<<endl;
}