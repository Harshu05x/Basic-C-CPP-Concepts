#include<iostream>
using namespace std ;

int main ()
{
    int x,y,z;
    cout<<"Enter 3 num:"<<endl;
    cin>>x>>y>>z;

    if(x>y)
    {
        if(x>z)
        {
            cout<<x<<" is greater.";
        }
        else
        {
            cout<<z<<" is greater";
        }
    }
    else if(y>z)
    {
        cout<<y<<" is greater.";
    }
    else
    {
        cout<<z<<" is greater";
    }
    return 0;
}
