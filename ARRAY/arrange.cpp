#include<iostream>
using namespace std;



int main() 
{
    long n,t;
    cin>>t;
    for(int p=1;p<=t;p++){

    

    cin>>n;
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            cout<<i<<" ";
            
        }
        for(int j=n;j>=2;j-=2){
            cout<<j<<" ";

        }
    }
    if (n%2!=0)
    {
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";

        }
         for(int j=n-1;j>=2;j-=2){
            cout<<j<<" ";
            
        }
    }
    





cout << '\n';
}
}
   
