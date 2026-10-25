#include<iostream>

using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    
    cin>>s;


    
    long long q;
    cin>>q;
    long long arr[n];
    long long sum=0;


    for(long long i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' ){
            sum+=1;
            arr[i]=sum;


        }
        else{
            arr[i]=sum;


        }
    }
    
    
    while(q>0){
        long long l;
        long long r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<arr[r]<<endl;
                }
        else{
            cout<<arr[r]-arr[l-1]<<endl;

        }
        q--;


    }
}