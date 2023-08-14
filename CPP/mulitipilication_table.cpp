#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no you want which you want as multipilication table: ";
    cin>>n;
    cout<<"The multipilication table of "<<n<<" is: "<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }return 0;
}
