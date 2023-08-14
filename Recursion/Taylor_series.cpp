#include <iostream>
using namespace std;

// Taylor Series --> 
// e**x = 1 + x + (x**2/2!) + (x**3/3!) +  (x**4/4!) + (x**5/5!) +........
double e(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
        
    }
}

// Taylor Series using Horner's Rule -->
// e**x= 1 + x/1 [1 + x/2 [1 + x/3 [1 + x/4 [1 + x/5.......]]]]
double e1(double x, double n){
    static double r;
    if(n==0)
        return r;
    r=1+x*r/n;
    return e1(x,n-1);
}
int main(){
    int x,n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter no of terms: ";
    cin>>n;
    cout<<e(x,n)<<endl;
    cout<<e1(x,n);
}