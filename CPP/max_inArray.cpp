#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int A[]= {4,3,5,9,4,1,6};
    int sum=0, max=INT_MAX;
    for(int i=0; i<7; i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    cout<<"Max is : "<<max;

}

