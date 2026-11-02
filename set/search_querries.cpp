#include<iostream>
#include<set>
#include<map>

using namespace std;
int main(){
    long long n,q;
    cin>>n>>q;
    map<long long,long long> m;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        m[a]=i;

    }
    while(q>0){
       
       long long x;
       cin>>x;
       if(m.count(x)){
        cout<<m[x]+1<<endl;

       }
       else{cout<<-1<<endl;
    }
       
       
       
       
        q--;

    }


}