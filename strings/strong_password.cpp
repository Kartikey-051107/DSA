#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    if (n==10){
    for(int i=0;i<n;i++){
       for (int i = 0; i < n; i++) {
    char ch = s[i];

    if (ch >= '0' && ch <= '9') {
        c1++;
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        c2++;
    } 
    else if (ch >= 'a' && ch <= 'z') {
        c3++;
    } 
    else {
       
        c4++;
    }
}
    }
    if(c1>0 && c2>0 && c3>0 && c4>0){
        cout<<("Strong");

    }
    else{
        cout<<"Weak";

    }
}
else{
    cout<<"Weak";
}

}