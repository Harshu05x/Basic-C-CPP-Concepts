
#include<iostream>
using namespace std;
int main()
{
    int n, rem, a=0;
    cout<<"enter the num:";
    cin>>n;cout<<"Words are: ";
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        a=a*10+rem;
    }
    while(a>0)
    {
        rem=a%10;
        a=a/10;
        switch(rem)
        {
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        case 4:
            cout<<"four ";
            break;
        case 5:
            cout<<"five ";
            break;
        case 6:
            cout<<"six ";
            break;
        case 7:
            cout<<"seven ";
            break;
        case 8:
            cout<<"eight ";
            break;
        case 9:
            cout<<"nine ";
            break;
        }
    }
}
