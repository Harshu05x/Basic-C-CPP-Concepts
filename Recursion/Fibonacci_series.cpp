//Fibonacci series --> 0 1 1 2 3 5 8 13 21 34 ................

#include <iostream>
using namespace std;

int fibo(int n){
    if (n<=1) return n;
    return fibo(n-2)+fibo(n-1);
}

//Memonization Method -->
int F[10];
int fib(int n){
    if (n<=1){
        F[n]=n;
        return n;
    }
    else {
        if (F[n-2]==-1) 
            F[n-2]=fib(n-2);
        if (F[n-1]==-1) 
            F[n-1]=fib(n-1);

        return F[n-2]+F[n-1];
    }
}
int main(){
    int n;
    cout<<"Enter index of term: ";
    cin>>n;
    cout<<fibo(n)<<endl;
    for (int i=0;i<10;i++) F[i]=-1;
    cout<<fib(n);

}