// In merging we need two sorted arrays. So it is a binary opreation.
// Combine two sorted array in single sorted array. It has TC of O(n+m)
#include<iostream>
using namespace std;

void merge(int *A, int *B, int *C , int n, int m){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(A[i]<B[j]) C[k++]=A[i++];
        else C[k++]=B[j++];
    }
    for(;i<n;i++) C[k++]=A[i];
    for(;j<m;j++) C[k++]=B[j];

}

int main(){
    int *A,*B,*C;
    int n,m;

    cout<<"Enter size of A: ";
    cin>>n;
    cout<<"Enter size of B: ";
    cin>>m;

    A=new int[n];
    cout<<"Enter ele in array A: ";
    for (int i=0; i<n; i++) cin>>A[i];

    B=new int[m];
    cout<<"Enter ele in array B: ";
    for (int i=0; i<n; i++) cin>>B[i];

    C=new int[n+m];
    merge(A,B,C,n,m);
    for (int i=0; i<n+m; i++) cout<<C[i]<<" ";

}