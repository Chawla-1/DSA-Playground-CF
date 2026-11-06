#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int count1=0;
        int count2=0;
        int maxi1 =0;
        int maxi2 =0;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s[i] == '<'){
                count1++;
                count2=0;
                maxi1 = max(maxi1,count1);
            }
            else{
                count2++;
                count1=0;
                maxi2 = max(maxi2,count2);
            }
        }
        cout<<max(maxi1,maxi2)+1<<endl;
    }
}