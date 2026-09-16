#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int i=0;int x = 0;
        while(i<n){
            i++;x++;
            while(x%3 == 0 || x%10 == 3){
                x++;
            }
        }
        if(x%3 == 0 || x%10 == 3){
            x++;
        }
        cout<<x<<endl;
    }
}
