#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=1;i<n;i++){
        int swap=0;

        for(int j=1;j<=n-i;j++){
            long long temp;

            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                swap++;
       
        }
        

    }}


int target_index = -1;
for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < arr[n-1]) {
        target_index = i;
        break; 
    }
}

if (target_index != -1) {
    cout << arr[target_index] << endl;
} else {
    cout << "-1" << endl;
}}