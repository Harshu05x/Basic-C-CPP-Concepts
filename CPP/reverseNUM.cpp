#include<iostream>
using namespace std;
int main()
{
    int n, rem, a=0;
    cout<<"enter the num:";
    cin>>n;
    //cout<<"digits are: ";
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        a=a*10+rem;
    }cout<<"reversed num is: "<<a;
}

