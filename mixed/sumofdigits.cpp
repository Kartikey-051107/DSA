#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    long long sum=0;

    long long n=s.size();
    for(int i=0;i<n;i++){
        sum+=(s[i]-'0');
    }
    cout<<sum;


}