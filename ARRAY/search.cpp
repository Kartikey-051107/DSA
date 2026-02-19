#include<iostream>
using namespace std;
 int search(long long arr[],long n,long x){
  
   
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return 1;

        }
    }
    return 0;


}
int main() 
{
    long n,x;
    cin>>n;
    cin>>x;

    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    int a=search(arr,n,x);
    if(a==0){
        cout<<"NO";

    }
    else if(a==1){
        cout<<"YES";

    }


}