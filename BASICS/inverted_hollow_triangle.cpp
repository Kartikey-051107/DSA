#include<iostream>
using namespace std;
int main() {
    long long  n;
    cin>>n;
    if(n==1){
        cout<<"*";
    }
    else{
        for(int k=1;k<=n;k++){
            cout<<"*";
            if(k<n){
                cout<<" ";
            }

        }
        cout<<endl;
    for(int i=2;i<=n-1;i++){

        for(int j=1;j<=i-1;j++){
            cout<<" ";

        }
        cout<<"*";
        for(int k=1;k<=2*(n-i)-1;k++){
            cout<<" ";

        }
        cout<<"*"<<endl;
        
        
        }
        for(int i=1;i<=n-1;i++){
            cout<<" ";
        }
        cout<<"*";
        
    }}
        