#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int weight = 0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] == 2){
                weight+=2;
                count2++;
            }
            else{
                weight+=1;
                count1++;
            }
        }
        if(weight%2 == 0){
            if(count2%2==0){
                if(count1%2 == 0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                if(count1>=2 && count1%2==0){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}