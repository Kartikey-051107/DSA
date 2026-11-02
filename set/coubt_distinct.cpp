#include<iostream>
#include<set>
using namespace std;
int main(){
    long long n;
    cin>>n;
    set<long long > set;

    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;

        
       set.insert(a);


    }
    cout<<set.size();
    

}