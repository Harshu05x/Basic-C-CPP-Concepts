#include<iostream>
using namespace std;

int main()
{
    int a=11;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}
