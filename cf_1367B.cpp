#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int odd = 0;
        int even = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i%2 == 0){
                if(v[i] % 2 != 0)odd++;
            }
            else{
                if(v[i] % 2 == 0)even++;
            }
        }
        if(odd == even)cout<<even<<endl;
        else cout<<-1<<endl;
    }
}
