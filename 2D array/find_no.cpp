#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    int x;
    cin>>x;

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    int k=0;

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x==arr[i][j]){
                cout<<"true";
                k=1;
                break;

            }
        }

    if(k==1) break;}
    if(k==0){
        cout<<"false";
    }
    return 0;

    }
