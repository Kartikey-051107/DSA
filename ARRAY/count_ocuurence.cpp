#include<iostream>
using namespace std;



int main() 
{
    long n,x;
    cin>>n;
    cin>>x;

    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    long count=0;
    for(int j=0;j<n;j++){
        if(arr[j]==x){
            count++;

        }
    }
    cout<<count;
    


}