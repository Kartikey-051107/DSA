#include<iostream>
using namespace std;
int main(){
    string s;
    
    int max_length=0;

    while(cin>>s){
        int len=s.size();
        if(len>max_length){
            max_length=len;

        }

    }
    cout<<max_length;

}