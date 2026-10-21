#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        int suma=0;
        for(int i=0;i<n;i++){
            cin>>a[i];suma+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(k == 0)break;
            if(a[j] < b[i]){
                suma+=(b[i]-a[j]);
                swap(a[j],b[i]);
                k--;
            }
            j++;
        }
        cout<<suma<<endl;
    }
}
