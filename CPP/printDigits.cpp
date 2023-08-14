#include<iostream>
using namespace std;
int main()
{
    int n, rem, a=0;
    cout<<"enter the num:";
    cin>>n;
    cout<<"digits are: ";
     while(n>0)
    {
        rem=n%10;
        n=n/10;
        a=a*10+rem;
    }
    while(a>0)
    {
        rem=a%10;
        cout<<rem<<" ";
        a=a/10;
    }
}
