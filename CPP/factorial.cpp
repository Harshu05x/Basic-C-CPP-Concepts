
#include<iostream>
using namespace std;

int main()
{
    int n;
    int fac=1;
    cout<<"Enter the no : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fac=fac*i;//fac*=i it is aslo a correct method.

    }
    cout<<"The factorial of "<<n<<" is : "<<fac;
    return 0;
}
