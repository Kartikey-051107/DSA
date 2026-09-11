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
    int a=1;
    for(int j=1;j<n;j++){
        if(arr[j-1]>arr[j]){
            a=0;
            break;

        }}

        if(a==1){
            cout<<"YES";

        }
        if(a==0){
            cout<<"NO";

        }
    



}