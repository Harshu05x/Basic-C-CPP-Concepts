#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a,b and c:"<<endl;
    cin>>a>>b>>c;
    float d=b*b-4*a*c;
    cout<<"d is: "<<d<<endl;
    if(d>0)
    {
        cout<<"hence roots are real and unequal!";
        cout<<endl<<"roots are "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a);
    }
    else if(d==0)
    {
        cout<<"hence roots are real and equal!";
        cout<<endl<<"root is "<<(-b/(2*a));
    }
    else
    {
        cout<<"hence roots are imaginry!";
    }


}
