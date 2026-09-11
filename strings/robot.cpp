#include<iostream>
using namespace std;
void check(string s)
{int x=0;
    int y=0;
   
   
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
        y+=1;

        }
        if(s[i]=='D'){
            y-=1;

        }
        if(s[i]=='R'){
            x+=1;

        }
        if(s[i]=='L'){
            x-=1;

        }
    }
    if(x==0 && y==0){
        cout<<"true";

        
    }
else{
    cout<<"false";

}}

int main(){
    string s;
    cin>>s;
    check(s);

    
}