#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    bool flag=false;

    string  arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    string t;
    cin>>t;
    int l=0,r=n-1;
    while(l<=r){
        long middle=(l+r)/2;
        if(arr[middle]==t){
            flag=true;
            break;
        }
        else if(arr[middle]<t){
            l=middle+1;

        }
        else if(arr[middle]>t){
            r=middle-1;
        }
    }
    if(flag){
        cout<<("YES");

    }
    else{
        cout<<"NO";

    }
}
