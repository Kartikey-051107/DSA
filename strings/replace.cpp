#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n=s.size();
    char a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        if(s[i]==a){
            s[i]=b;

        }
    }
    cout<<s;
    


}
