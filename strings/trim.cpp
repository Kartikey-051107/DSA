#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char x;
  
    int n=s.size();

    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            cout<<s[i];
            
        }
    }



}