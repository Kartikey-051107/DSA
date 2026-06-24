#include<iostream>
using namespace std;
int main() {
    long n;
    long m;

    cin>>n;
    if(n==1){
        cout<<"*";

    }
    else{
   
    
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int j=1;j<=n-2;j++){
        cout<<"*";
        for(int i=1;i<n-1;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;


    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }}}
