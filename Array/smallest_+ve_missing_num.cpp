#include <iostream>
using namespace std;
                   
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i]; 

    int H[100];
    for(int i=0;i<100;i++) H[i]=0;

    for(int i=0; i<n; i++) {
        if(A[i]>=0) H[A[i]]++;
    } 
    for(int i=1;i<100;i++){
        if(H[i]==0){
            cout<<i<<endl;
            break;
        }
    } 
    return 0;
}