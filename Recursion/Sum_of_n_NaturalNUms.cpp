#include <iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
    else
        return 0;
}
int main()
{   int n;
    cout<<"Enter no of terms: ";
    cin>>n;
    cout<<sum(n);
}
