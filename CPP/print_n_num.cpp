#include<iostream>

using namespace std;

int main()
{
    int i=1, n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    /* while(i<n)
     {                  //We can aslo write this code in while loop.
         cout<<i<<",";
         i++;
     }
     cout<<i<<".";*/
    /* do
     {                   //We can aslo write this code in do while loop.
         cout<<i<<",";
         i++;
     }while(i<n);
     cout<<i<<".";*/
    for(int i=1; i<n; i++)
    {
        cout<<i<<",";
    }
    cout<<n<<".";

    return 0;
}

