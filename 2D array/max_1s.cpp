#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    
 

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    int count[n];


    for (int i=0;i<n;i++){
         count[i]=0;
        for(int j=0;j<m;j++){
           

            if(arr[i][j]==1){
                count[i]++;

               
            }
        }}
int max=count[0];
int k;

for(int i=0;i<n;i++){
    if (count[i]>max){
 max=count[i];

        k=i;
    }

}
if(max==0){
    cout<<-1;
}
 else{cout<<k;

    }}
