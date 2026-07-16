#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n-1;i++){
        int min_ind=i;
        int min=arr[i];

        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
               

            }
            

        }
         min=arr[min_ind];

             swap(arr[i],arr[min_ind]);
        cout<<"Pass "<<i+1<<": ";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<", min_selected = "<<min;
   
    cout<<endl;

   
    

    }
}