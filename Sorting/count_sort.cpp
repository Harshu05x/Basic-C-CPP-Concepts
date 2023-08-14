#include <iostream>
using namespace std;

void display(int A[],int n){
    for(int i = 0; i < n; i++) cout<<A[i]<<" ";
}
int findMax(int A[],int n){
    int max = INT32_MIN;
    for(int i = 0; i < n; i ++){
        if(A[i] > max) max = A[i];
    }
    return max;
}

void count_sort(int A[],int n){
    int max = findMax(A,n);
    int *C;
    C = new int[max + 1];

    for(int i = 0; i < max+1; i++) C[i] = 0;
    for(int i = 0; i < n; i++) C[A[i]]++;
    int i,j; i = 0; j = 0;

    while(i < max + 1 ){
        if(C[i] > 0){
            A[j++] = i;
            C[i]--;
        }
        else i++;
    }
}

int main()
{
    int A[] = {10,9,8,7,6,5,4,3,2,1};
    count_sort(A,10);
    display(A,10);
    return 0;
}