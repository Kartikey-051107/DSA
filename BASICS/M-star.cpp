#include<iostream>
using namespace std;
int main() {
    long n;
    long m;

    cin>>n;
    cin>>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}