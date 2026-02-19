#include<iostream>
using namespace std;
int main() 
{
    long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    long sum=0;
    for (int j=0;j<n;j++){
        sum+=arr[j];
        }
    cout<<sum;
    }
        
        
        