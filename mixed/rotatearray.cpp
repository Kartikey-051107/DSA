#include<iostream>
using namespace std;
int main(){
    long t;
    cin>>t;
    
    while(t>0){
        long n;
        cin>>n;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        long d;
        cin>>d;
        for(int i=d;i<n;i++){
            cout<<arr[i]<<" ";

        }
       for(int i=0;i<d;i++){
        cout<<arr[i]<<" ";

       }
       cout<<endl;
       t--;
    }
    
}