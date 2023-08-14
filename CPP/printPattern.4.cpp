#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no.: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==1&&j==1 || i==1&&j==2 || i==2&&j==1 || i==2&&j==2)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}



