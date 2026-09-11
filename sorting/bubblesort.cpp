#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=1;i<n;i++){
        int swap=0;

        for(int j=1;j<=n-i;j++){
            long long temp;

            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                swap++;
       
        }
    }
    
    cout<<"Pass "<<i<<": ";
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
            

        }
        cout<<", swaps = "<<swap<<endl; 
    if (swap==0){
        break;
        
    }    
    }
        
        
}