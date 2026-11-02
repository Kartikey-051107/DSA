#include<iostream>

using namespace std;
long long sum_of_digits(long long m){
    long long sum=0;
    if(m<10){
        sum=m;
        return sum;

    }

   else{
    while(m>0 ){
        sum+=(m%10);
        m=m/10;





    }
    return sum;
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
        if(sum_of_digits(arr[i])==k){
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