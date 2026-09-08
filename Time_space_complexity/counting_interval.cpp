#include<iostream>
using namespace std;
int main(){
    int T;
    long long Q,l,r;
    cin>>Q;

    while(Q>0){
        cin>>T>>l>>r;
        if (l > r) {
    cout << 0 << "\n";
}
else if(T == 1) {
    long long ans = r - l - 1;
    cout << (ans < 0 ? 0 : ans) << "\n"; 
}
else if (T == 2 || T == 3) {
    cout << (r - l) << "\n";
}
else if (T == 4) {
    cout << (r - l + 1) << "\n";
}
Q--;
}}