#include <iostream>
using namespace std;

//Swap ele
void swap(int *x, int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;}

//Insert ele in sorted array.
void insert(int *A,int n,int x){
    int i=n-1;
    while(i>=0 && A[i]>x){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    n++;
}
// Checks if array is sorted or not
bool isSorted(int *A, int n){
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]) return false;
    }
    return true;
}

//Brings out all -ve num one side and all +ve num one side.
void sort(int *A, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(A[i]<0) {i++;}    
        while(A[j]>=0) {j--;} 
        if (i<j) swap(&A[i],&A[j]);
    }   
}

int main(){
    int n,x;
    int *A;
    cout<<"enter length of array: ";
    cin>>n;
    A=new int[n];

    cout<<"Enter ele in array: ";
    for (int i=0; i<n; i++) cin>>A[i];

    // cout<<"Enter ele to be insert: ";
    // cin>>x;
    // insert(A,n,x);
    // for (int i=0; i<=n; i++) cout<<A[i]<<" ";

    // cout<<isSorted(A,n);
    
    sort(A,n);
    for (int i=0; i<n; i++) cout<<A[i]<<" ";
    return 0;
}