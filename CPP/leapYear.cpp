

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
                cout<<n<<" is leap year";
            }
            else
            {
                cout<<n<<" is not a leap year";
            }
        }
        else
        {
            cout<<n<<" is leap year";
        }
    }
    else
    {
        cout<<n<<" is not a leap year";
    }
}
