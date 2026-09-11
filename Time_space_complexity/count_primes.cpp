#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    long long primes=0;

    for(long long i=2;i<=n;i++){
        long long count=0;
        for(long long j=2;j*j<=i;j++){
            if (i%j==0){
                count++;
                break;

            }
        }
        if(count==0){
            primes++;

        }
        }
        cout<<primes;

        
    }
    
 
