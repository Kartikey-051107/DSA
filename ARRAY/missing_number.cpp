#include<iostream>
using namespace std;
int main() {
    long n;
    cin>>n;

    for (int i=1;i<=n;i++){
    
    long  p;
    cin>>p;


        int arr[p];


        for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    for(int k=0;k<p;k++){
        int count=0;
        int h=arr[k];
        for (int i=0;i<p;i++){
            if(arr[k]==arr[i]){
                count++;
            }

        }
        if(count==1){
            cout<<h<<endl;
            break;

        }
    }
    }
}