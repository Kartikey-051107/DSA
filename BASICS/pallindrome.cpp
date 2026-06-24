#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long c=n;
    long long rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if(rev==c){
        cout<<"YES";}
    else {
    cout<<"NO";
    }
    
}
