#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long total_sum = 0;

    for (long long i = 0; i < n; i++) {
        long long val;
        cin >> val;
        
        // Calculate how many subarrays contain this specific element
        long long occurrences = (i + 1) * (n - i);
        
        // Add its total contribution to the final sum
        total_sum += val * occurrences;
    }

    cout << total_sum << "\n";

    return 0;
}
