#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time C = O(n*2)  Space C = O(1) of selection sort
// it's neither adaptive nor stable 
void selection_sort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        } 
        swap(arr[minIndex],arr[i]);
    }
   display(arr,5);
}


int main()
{
    int arr[ ] = {10,9,8,7,6,};
    int n;
    selection_sort(arr,5);

    return 0;
}