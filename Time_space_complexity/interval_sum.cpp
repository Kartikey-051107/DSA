#include<iostream>
using namespace std;
int main(){
    long long t,l,r;
    cin>>t;
    while(t>0){
        cin>>l;
        cin>>r;
        cout<<(r-l+1)*(l+r)/2<<endl;
        t--;

    }
}