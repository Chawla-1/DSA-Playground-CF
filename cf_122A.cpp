#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(47);
    v.push_back(74);
    v.push_back(444);
    v.push_back(447);
    v.push_back(474);
    v.push_back(477);
    v.push_back(744);
    v.push_back(747);
    v.push_back(774);
    v.push_back(777);
    bool lucky = false;
    for(int i=0;i<v.size();i++){
        if(n == v[i] || n%v[i] == 0){
            lucky = true;
            break;
        }
    }
    if(lucky)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}