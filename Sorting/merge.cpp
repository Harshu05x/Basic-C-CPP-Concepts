#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
}


//  It Merge two diiferent sorted arrays in an auxillary array.
int* merge_sort(int A[],int B[],int m,int n){
    int *C;
    C = new int[m + n];
    int i , j , k;
    i = j = k = 0;
    while(i < m && j < n){
        if(A[i] < B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }
    for(;i < m; i++) C[k++] = A[i];
    for(;j < n; j++) C[k++] = B[j];
    // display(C,m+n);
    return C;
}

// it merge a single  array by divinding it into two parts
void merge_sort01(int A[],int n){
    int *C;
    C = new int[n];
    int i , j , k;
    i = 0; j = n/2 + 1; k = 0;

    while(i <= n/2 && j < n){
        if(A[i] < A[j]) C[k++] = A[i++];
        else C[k++] = A[j++];
    }
    for(;i <= n/2; i++) C[k++] = A[i];
    for(;j <= n; j++) C[k++] = A[j];

    for(int i = 0; i < n; i++) A[i] = C[i];
    display(A,n);
}


int main()
{
    int A[] = {1,3,5,7,11,13,17,19};
    int B[] = {2,4,6,8};
    int D[] = {21,23,25,27,29};
    int C[] = {31,32,33,34,35};
    int *E = merge_sort(A,B,8,4);
    int *F = merge_sort(C,D,5,5);
    int *G = merge_sort(E,F,12,10);
    cout<<endl;
    display(G,22);
    // merge_sort01(,10);
    return 0;
}