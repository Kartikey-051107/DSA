#include<iostream>
using namespace std;
int main() {
    int n;
   int positive=0;
   int negative=0;
   int even=0;
   int odd=0;
   
    cin>>n;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
     
        if(k>0){
            positive+=1;

        }
        else if(k<0){
            negative+=1;}
        if(k%2==0){
            even+=1;

        }
        else{
        odd+=1;
        }
     
    }
cout<<positive<<endl<<negative<<endl<<even<<endl<<odd;
}