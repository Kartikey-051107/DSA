#include<iostream>
using namespace std;
int prime(long n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 1;
            
        }
        
    }
    return 0;

}
int main(){
    long n;
    cin>>n;
    int a=prime(n);
    if(a==0){
        cout<<"PRIME";

    }
    else{
        cout<<"NOT PRIME";
    }
}