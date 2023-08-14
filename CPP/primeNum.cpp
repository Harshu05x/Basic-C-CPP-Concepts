

#include<iostream>
using namespace std;

int main()
{
    int n, c=0;
    cout<<"Enter the no : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
   if(n==0 || n==1){
     cout<<n<<" is not a prime no.";

   }
   else if(c==2){
        cout<<n<<" is a prime no.";
    }else{

    cout<<n<<" is not a prime no.";}

    return 0;
}
