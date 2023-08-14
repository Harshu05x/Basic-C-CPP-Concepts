#include <iostream>
using namespace std;

int facto(int n){
   if(n==0)
        return 1;
   return facto(n-1)*n;
}
int main()
{   int n;
    cout<<"Enter num: ";
    cin>>n;
    cout<<facto(n);
}
