#include <iostream>
using namespace std;

void Max(int A[],int n,int mx){
    for(int i=0; i<n;i++){
        mx=max(mx,A[i]);
        cout<<mx<<" ";
    }
}                  
int main()
{   
    int mx=-1999999;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i];
    Max(A,n,mx);
    return 0;
}