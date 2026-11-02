#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
     long long q;
    cin >> q;
    
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
   
    long long arr2[n];
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        sum += arr[i]*arr[i];
        arr2[i] = sum;
    }
    
   
   
    while (q > 0) {
        long long l, r;
        cin >> l >> r;
        
        if (l == 1) {
            cout << arr2[r - 1] << "\n"; 
        } else {
            cout << arr2[r - 1] - arr2[l - 2] << "\n";
        }
        q--;
    }
    return 0;
}