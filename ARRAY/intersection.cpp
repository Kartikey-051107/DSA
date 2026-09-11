#include<iostream>
using namespace std;
int main() {
    long t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m;
        int arr1[m];
        
        for (int i=0;i<m;i++){
            cin>>arr1[i];
        }
        cin>>n;

        int arr2[n];
        
        for (int i=0;i<n;i++){
            cin>>arr2[i];
        }
        int printed=0;

        for (int i=0;i<m;i++){
           int  k=arr1[i];
           for(int j=0;j<n;j++){
            if(k==arr2[j]){
                if(printed>0){
                    cout<<" ";}
                      cout<<k;
                printed ++;
                arr2[j]=-1;
            break;
        
              
            }
           }
        }
cout<<endl;

    }
}