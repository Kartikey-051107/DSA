#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    long long  count =0;
    if(n==1){
        cout<<1;
    }
    else {
        for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            long long r=n/i;
        if(r==i){
            count+=1;


        }
        else {
            count+=2;

        }
        }
        
    }
    cout<<count;
    }
    

}