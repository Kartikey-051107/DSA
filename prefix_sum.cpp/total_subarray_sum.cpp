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
    long long ans=0;



    // L is the starting index of the subarray
    for (int L = 0; L < n; L++) {
        long long sum=0;
        

        
        // R is the ending index of the subarray
        for (int R = L; R < n; R++) {
            
            sum+=arr[R];
            ans+=sum;

          
            
            // Move to the next line after printing one complete subarray
            
        }
        
    }
    cout << ans<<endl;

    return 0;
}