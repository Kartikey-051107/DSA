#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long factorial=1;
    if(n==0){
        factorial=1;
    }
    else{for(int i=1;i<=n;i++){
        factorial=factorial*i;

    }}
    cout<<factorial;
}





