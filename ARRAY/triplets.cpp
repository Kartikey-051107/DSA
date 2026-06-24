#include<iostream>
using namespace std;

    


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int X;
        cin >> X;

        int count = 0;

     
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    
                    if(arr[i] + arr[j] + arr[k] == X) {
                        count++;
                    }

                }
            }
        }

        cout << count << endl;
    }
}