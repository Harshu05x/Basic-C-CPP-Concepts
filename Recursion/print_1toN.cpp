#include <iostream>
using namespace std;

// It prints num 1 to n.
void num1(int n){
    if (n>0){
    num1(n-1);
    cout<<n<<" ";}
}

// It prints num n to 1.
void num(int n){
    if (n>0){
    cout<<n<<" ";
    num(n-1);}
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    num(n);
    cout<<endl;
    num1(n);
}
