#include <iostream>
using namespace std;

int fun1(int n){
    if(n>0){
        return fun1(n-1)+n;//Here n is acts as Local var.
    }
    return 0;
}

int fun2(int n){
    static int x; //Here X acts as a static var so its have only one copy.
    if(n>0){
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}
int x=0; //Here X acts as a Global var it also have single copy.
int fun3(int n){ 
    if(n>0){
        x++;
        return fun3(n-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    cout<<fun1(a)<<endl;
    cout<<fun2(a)<<endl;
    cout<<fun3(a)<<endl;
    return 0;
}