#include<iostream>
using namespace std;
int main() 
{
    long n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int min=arr[0];
    int index=0;
    for (int j=1;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            index=j;

        }
        
    }
    cout<<min<<" "<<index+1;
        }
        
        