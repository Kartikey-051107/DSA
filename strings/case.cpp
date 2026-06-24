#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;

    int a;
    a=int(c);
    if(a>=48 && a<=57){
        cout<<"Digit";

    }
    else if(a>=65 && a<=90){
        cout<<"Uppercase";
        
    }
    else if(a>=97 && a<=122){
        cout<<"Lowercase";
        
    }
    
    else{
        cout<<"Special";

    }
    
}