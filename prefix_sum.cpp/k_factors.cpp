#include<iostream>
#include<math.h>

using namespace std;
long long factors(long long n){
    
    long long  count =0;
    if(n==1){
        return 1;
    }
    else {
        for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0){
            long long r=n/i;
        if(r==i){
            count+=1;


        }
        else {
            count+=2;

        }
        }
        
    }
    return count;
    }
    
    

}
int main(){
    long long n,q;
    int k;
    cin>>n>>q>>k;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];

    }
    long long p[n];
    long long sum=0;


    for(long long i=0;i<n;i++){
        if(factors(arr[i])==k){
            sum+=1;
            p[i]=sum;


        }
        else{
            p[i]=sum;

        }

    }
    while(q>0){
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<p[r]<<endl;

        }
        else{
            cout<<p[r]-p[l-1]<<endl;

        }
        q--;

    }


}