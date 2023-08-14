#include <iostream>
using namespace std;

int pow1(int m,int n){
    if (n==0)
        return 1;
    return pow1(m,n-1)*m;// pow(m,n)={m*m*m*m*.....*(n-1)times}*m
}

// This is efficient way to find power compared to above one.
// Here we reduces the no of multipilications.
int pow(int m,int n){
    if (n==0)
        return 1;
    if (n%2==0)
        return pow(m*m,n/2);
    else 
        return m*pow(m*m,(n-1)/2);
}
int main(){
    int m,n;
    cout<<"Enter base: ";
    cin>>m;
    cout<<"Enter power: ";
    cin>>n;
    cout<<pow1(m,n);
    cout<<endl;
    cout<<pow(m,n);
}