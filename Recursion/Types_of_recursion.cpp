#include <iostream>
using namespace std;

// 1] Tail Recursion
void fun1(int n){
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
    }
}

// 2} Head Recursion
void fun2(int n){
    if(n>0){
        fun2(n-1); 
        cout<<n<<" ";
        
    }
}

// 3] Tree Recursion
void fun3(int n){
    if(n>0){
        cout<<n<<" ";
        fun3(n-1);
        fun3(n-1);
    }
}

// 4] Indirect Recursion
// here fun A caling fun B and fun B caliing fun A.
void B(int n);
void A(int n){
    if(n>0){
        cout<<n<<" ";
        B(n-1);
    }
}
void B(int n){
    if(n>1){
        cout<<n<<" ";
        A(n/2);
    }
}

// 5] Nested Recursion
int fun5(int n){
    if (n>100){
        return n-10;
    }
    else
        return fun5(fun5(n+11));
}
int main(){
    int x=3;
    cout<<"Its a Tail Recursion."<<endl;
    fun1(x);
    cout<<endl;
    cout<<"Its a Head Recursion."<<endl;
    fun2(x);
    cout<<endl;
    cout<<"Its a Tree Recursion."<<endl;
    fun3(x);
    cout<<endl;
    cout<<"Its Indirect Recursion."<<endl;
    A(20);
    cout<<endl;
    cout<<"Its a Nested Recursion."<<endl;
    cout<<fun5(95);
}