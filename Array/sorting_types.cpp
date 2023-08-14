#include <iostream>
using namespace std;

// 1] Selection sort--> find the min ele in unsorted array and 
//                      swap it with ele at begining.
void selectionSort(int A[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n ;j++){
            if(A[j]<A[i]) {
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"Sorted array--> "<<endl;
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
}

int main()
{   int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i];

    selectionSort(A,n);
    return 0;
}