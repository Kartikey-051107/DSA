#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for (int i=0;i<n;i++){
        if(int(s[i])>=65 && int(s[i])<=90){
             int m=int(s[i]);
             int k=m+32;
             s[i]=char(k);

        }
        else if(int(s[i])>=97 && int(s[i])<=122){
            int m=int(s[i]);
             int k=m-32;
             s[i]=char(k);

        }
    }
    cout<<(s);
}