#include<iostream>
using namespace std;
int main(){
    long n;
    long t;
    cin>>t;

   
    while(t>0){
         cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
for (int j=0;j<n;j++){
for(int i=0;i<n-1;i++){
int temp;
if(arr[i]==0){
    temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;


}
}
}
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
t--;
cout<<endl;
}}