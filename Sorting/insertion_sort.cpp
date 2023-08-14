#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i = 0;i < n; i++) cout<<arr[i]<<" ";
}

// Worst Time C = O(n*2)  Best Time C = O(n)
// Space C = O(1) of insertion sort
// Insertion Sort is naturally adaptive also it is stable

void insertion_sort(int arr[],int n){
    for(int i = 1; i < n ; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    display(arr,5);
}

int main()
{
    int arr[ ] = {10,6,5,4,3};
    int n;
    insertion_sort(arr,5);
    return 0;
}