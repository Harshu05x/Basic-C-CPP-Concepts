#include<iostream>
using namespace std;


int main (){
int a;
cout<<"Enter no upto you want to print tables :";
cin>>a;
cout<<endl;
for (int i=2; i<=a; i++){
        cout<<"**************************"<<endl;
        cout<<"Multipilication table of "<<i<<endl;
    for(int n=1; n<=10; n++){
        cout<<i<<"*"<<n<<"="<<i*n<<endl;
    } cout<<endl;

}
}
