

#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<"Factors of "<<n<<" are : ";
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<",";
            sum=sum+i;
        }
    }
    sum=sum+n;
    cout<<n<<"."<<endl;
    cout<<"sum of factors is : "<<sum<<".";

    return 0;
}
