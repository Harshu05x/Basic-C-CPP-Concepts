#include<iostream>
using namespace std;
int main()
{
    int n,m, rem, a=0;
    cout<<"enter the num:";
    cin>>n;
    m=n;
    //cout<<"digits are: ";
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        a=a*10+rem;

    }//cout<<a;
    if(a==m)
    cout<<a<<" is a palindrome num";
else

cout<<a<<" is not a palindrome num";


}
