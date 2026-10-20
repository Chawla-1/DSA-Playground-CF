#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int count=0;int total=0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 2)total++;
        }
        if(total%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        int ind=-1;
        for(int i = 1; i < n; i++){
            if(v[i-1] == 2){
                count++;total--;
            }
            if(count == total){
                ind = i;
                break;
            }
            
        }cout<<ind<<endl;
    }
}
