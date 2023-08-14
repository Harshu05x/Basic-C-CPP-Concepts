#include<iostream>
using namespace std;

 int fun (int *a, int *b, int *c, int *d){

     if(*a>*b && *a>*c && *a>*d){
    cout<<*a;}
     if(*b>*a && *b>*c && *b>*d){
    cout<<*b;}
     if(*c>*a && *c>*b && *c>*d){
    cout<<*c;}
     else{
    cout<<*d;}
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<fun(&a,&b,&c,&d);
    return 0;

}
