#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int rect_area = a*b*2;
        int side1 = max(a,b);
        int side2 = min(a,b);
        int area = -1;
        if(2*side2 < side1)area = side1*side1;
        else area = 2*side2*2*side2;
        cout<<area<<endl;
    }
}
