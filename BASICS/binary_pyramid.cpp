#include<iostream>
using namespace std;
int main() {
    long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i/2;j++){
                cout<<"01";
            }
            cout<<"0"<<endl;
        }
        else if(i%2==0){
            for(int j =1;j<=i/2;j++){
                cout<<"10";
            }
            cout<<endl;
        }
        }}
        