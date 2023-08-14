// Set operations --> 1]Union 2]Intersection 3]Difference
#include<iostream>
using namespace std;

// union of two sorted arrays
void Union(int *A, int *B, int n, int m){
    int i=0;
    int j=0;
    int k=0;
    int *C;
    C=new int[m+n];
    while(i<n && j<m){
        if (A[i]<B[j]) C[k++]=A[i++];
        else if (B[j]<A[i]) C[k++]=B[j++];
        else {
            C[k++]=A[i++];
            j++;
        }
    }
    for(;i<n;i++) C[k++]=A[i];
    for(;j<m;j++) C[k++]=B[j];
    for (int i=0; i<k; i++) cout<<C[i]<<" ";

}

// Intersection of two sorted arrays.
void intersection(int *A, int *B, int n, int m){
    int i=0;
    int j=0;
    int k=0;
    int *C;
    C=new int[m+n];
    while(i<n && j<m){
        if (A[i]<B[j]) i++;
        else if (B[j]<A[i]) j++;
        else {
            C[k++]=A[i++];
            j++;
        }
    }
    for (int i=0; i<k; i++) cout<<C[i]<<" ";
}

// Difference between two sorted arrays.
void diff(int *A, int *B, int n, int m){
    int i=0;
    int j=0;
    int k=0;
    int *C;
    C=new int[m+n];
    while(i<n && j<m){
        if (A[i]<B[j]) C[k++]=A[i++];
        else if (B[j]<A[i]) j++;
        else {
            i++;
            j++;
        }
    }
    for(;i<n;i++) C[k++]=A[i];
    for (int i=0; i<k; i++) cout<<C[i]<<" ";

}

int main(){
    int *A,*B;
    int n,m,k;

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

    
    // Union(A,B,n,m);
    // intersection(A,B,n,m);
    // diff(A,B,n,m);
    
}