#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i=0;i<n;i++) cout<<A[i]<<" ";
}

// Merge Single Array 
void merge (int A[],int l,int mid,int h){
    int C[100];
    int i , j , k;
    i = l; j = mid + 1; k = l;

    while(i <= mid && j <= h){
        if(A[i] < A[j]) C[k++] = A[i++];
        else C[k++] = A[j++];
    }
    for(;i <= mid; i++) C[k++] = A[i];
    for(;j <= h; j++) C[k++] = A[j];

    for(int i = l; i <= h; i++) A[i] = C[i];
}

//  Iterative merge Sort
void merge_sort(int A[],int n){
    int p,i,l,mid,h;
    for(p = 2; p<= n; p *= 2){
        for(i = 0; i+p-1 < n; i += p){
            l = i;
            h = i + p - 1;
            mid = (l+h)/2;
            merge(A,l,mid,h);
        }
    }
    if(p / 2 < n) merge(A,0,p/2-1,n-1);
}

// Recursive Merge Sort
void merge_sort01(int A[],int l,int h)
{
    if(l < h){
        int mid = (l + h) / 2;
        merge_sort01(A,l,mid);
        merge_sort01(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int main()
{
    int A[] = {2, 5, 8, 16, 3, 6, 7, 10};
    // merge_sort(A,8);
    merge_sort01(A,0,7);
    display(A,8);    
    return 0;
}