#include<iostream>
//#include<math.h>
using namespace std;

int main()
{
    int n, sum;
    cout<<"enter the no of terms you wanted to sum:";
    cin>>n;
    sum=(n*n+n)/2;
    cout<<"-------------------------------------\n";
    /*sum=(pow(n,2)+n)/2; this pow fun we can use to
     square num and this is came from the header file math.h*/
    cout<<"The sum of "<<n<<" natural no is: "<<sum<<endl;
    cout<<"-------------------------------------\n";
    return 0;

}

