#include<iostream>
using namespace std;



int main() 
{
    long n,t;
    cin>>t;
    for(int p=1;p<=t;p++){
    cin>>n;
   

    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            int temp;

            if(arr[j]<arr[j-1]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";


    } cout<<endl;}


}