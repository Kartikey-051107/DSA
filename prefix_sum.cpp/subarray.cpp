#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read the size of the array
    int n;
    cin >> n;

    // Read the array elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // L is the starting index of the subarray
    for (int L = 0; L < n; L++) {
        
        // R is the ending index of the subarray
        for (int R = L; R < n; R++) {
            
            // Print everything between L and R
            for (int i = L; i <= R; i++) {
                cout << arr[i] << " ";
            }
            
            // Move to the next line after printing one complete subarray
            cout << "\n";
        }
    }

    return 0;
}