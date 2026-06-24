#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<"*"<<endl;

    for(int i=2;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;}
    for(int i=n-1;i>=2;i--){
        cout<<"*";
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;

    }
    if(n>1){

        cout<<"*";}
    }