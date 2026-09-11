#include<iostream>
#include<cmath>
using namespace std;


int main() {
    long long n;
    if (!(cin >> n)) return 0;
    
    long long i = 1;
    
    
    while (i * i < n) {
        if (n % i == 0) {
            cout << i << " ";
        }
        i++;
    }
    
    
    if (i * i == n) {
        cout << i << " "; // Print the square root once
        i--; // Step back to avoid printing it again
    } else {
        i--; // Step back because i * i is now greater than n
    }
    
    // Step 3: Count DOWN to print the second half of the factors
    while (i >= 1) {
        if (n % i == 0) {
            cout << (n / i) << " "; // Print the paired factor
        }
        i--;
    }
    
    cout << "\n";
    return 0;
}

    
    


