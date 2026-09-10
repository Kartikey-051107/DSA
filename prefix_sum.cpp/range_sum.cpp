#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];

    }
    long long q;
    cin>>q;
    while(q>0){ 
    long long l;
    long long r;
    cin>>l>>r;
    long arr2[n];
    long sum=0;
    for(long long i=0;i<n;i++){
        sum+=arr[i];
        arr2[i]=sum;



    }
    if(l==1){
        cout<<arr2[r-1]<<endl;

    }
    else{
        cout<<arr2[r-1]-arr2[l-2]<<endl;

    }
    q--;

}
   
}