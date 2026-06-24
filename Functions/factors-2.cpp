#include<iostream>
using namespace std;
void factors(long n){
    for(int i=n;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}
int main() {
  long n;
  cin>>n;
  factors(n);
  return 0;
  



}