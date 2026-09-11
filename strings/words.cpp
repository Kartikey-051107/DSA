#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    getline(cin,s);
    int n=s.size();
int count=0;

    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;

        }
    }
    cout<<(count+1);
  

    }



