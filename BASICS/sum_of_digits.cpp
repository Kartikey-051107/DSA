#include <iostream>
using namespace std;

int main() {
    long long sum=0;
    long long n;
    cin>>n;
    while(n>0){
         int a=n%10;
         sum+=a;
         n/=10;


    }
    cout<<sum;

}
