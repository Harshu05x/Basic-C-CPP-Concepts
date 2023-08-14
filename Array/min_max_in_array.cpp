#include <iostream>
using namespace std;

void minMax(int A[]){
    int min=A[0];
    int max=A[0];
    for(int i=0; i<10; i++){
        if(A[i]<min) min=A[i];
        else if (A[i]>max) max=A[i];
    }
    cout<<"Maximum ele is: "<<max<<endl;
    cout<<"Minimum ele is: "<<min<<endl;
}

int main()
{
    int A[]={5,8,3,9,6,2,10,7,-1,4};
    minMax(A);
    return 0;
}