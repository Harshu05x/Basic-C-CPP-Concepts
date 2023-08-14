#include<iostream>
using namespace std ;

int main ()
{
    int c;
    cout<<"Enter the no : "<<endl;
    cin>>c;

    for(int i=10; i!=0; i--){
        cout<<c<<"*"<<i<<"="<<c*i<<endl;
    }
    return 0;

}

