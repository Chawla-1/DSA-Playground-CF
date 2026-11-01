#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long sum=0;long long x;
        for(int i=0;i<n;i++){
            cin>>x;sum+=x;
        }
        long long i=1;long long j=sum;
        bool pos = false;
        while(i<=j){
            long long mid = (i+j)/2;
            if(mid == sum/mid && sum%mid == 0){
                pos = true;
                break;
            }
            else if(mid>sum/mid){
                j = mid-1;
            }
            else i=mid+1;
        }
        if(pos)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}