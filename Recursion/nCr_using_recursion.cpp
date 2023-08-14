//nCr using recursion by pascal's triangle.

#include <iostream>
using namespace std;

int nCr(int n, int r){
    if(r==0 || r==n) return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
}

int main(){
    int n,r;
    cout<<"enter value of 'n': ";
    cin>>n;
    cout<<"enter value of 'r': ";
    cin>>r;
    cout<<n<<"C"<<r<<": "<<nCr(n,r);
}