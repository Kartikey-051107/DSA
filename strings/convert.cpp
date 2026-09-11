#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int a=int(c);
    int b;

    if(a>=65 && a<=90){
        b=a+32;

        cout<<char(b);

    }
    else{
        cout<<c;
        
    }
}