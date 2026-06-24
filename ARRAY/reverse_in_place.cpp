#include<iostream>
using namespace std;



int main() 
{
    long n,t;

    cin>>n;
   

    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
if(n%2==0){
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;;


    }
    }
    if(n%2!=0){
    for(int i=0;i<n/2+1;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;;



    }
    
}
 for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}}