#include<iostream>

using namespace std;
int main(){
     long long n,q;
    cin>>n;
    cin>>q;

    long long  arr[n];

    for(long long  i=0;i<n;i++){
        cin>>arr[i];

    }
    long  long p[n];
    for(long long  i=0;i<n;i++){
        if(i%2==0){
            p[i]=arr[i];


        }
        else p[i]=-arr[i];

    }
    long long s[n];
    s[0]=p[0];
    
    for(long long  i=1;i<n;i++){
        s[i]=s[i-1]+p[i];

    }
    
    while(q>0){
        long long  l,r;
        long long  ans;



        cin>>l;
        cin>>r;
        l--;
        r--;
        if(l==0){
            ans =s[r];


        }
        else {
            if(l%2==0){
                ans=s[r]-s[l-1];


            }
            else{
                ans=-(s[r]-s[l-1]);

            }
        }
        cout<<ans<<endl;







    q--;}
}

    