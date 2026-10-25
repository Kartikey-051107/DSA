#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
    string s;
    cin>>s;

    int n=s.size();
   int i=0,j=0;
   int count=1;

   for(i=j;i<n;i++){
   
    if(s[i]==s[i+1]){
        count++;
        j=i;
    }
    else{
        cout<<s[i];
        if(count>1){
            cout<<count;
            
        }
        count =1;
        continue;

    }
   }
   cout<<endl;
t--;
}
    
}