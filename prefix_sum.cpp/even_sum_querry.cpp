#include<iostream>

using namespace std;
int main(){
    long long n;
    cin>>n;
    long long  arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];

    }
    for(long long  i=0;i<n;i+=2){
        arr[i]=0;

    }
    long long arr2[n];
    long long sum=0;
    for(long long i=0;i<n;i++){
        sum+=arr[i];
        arr2[i]=sum;



    }
    long long q;
    cin>>q;
    while(q>0){ 
    long long l;
    long long r;
    cin>>l>>r;
    l--;
    r--;


    
    if(l==0){
        cout<<arr2[r]<<endl;

    }
    else{
        cout<<arr2[r]-arr2[(l-1)]<<endl;

    }
    q--;

}
   
}