#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i = 0;i < n; i++) cout<<arr[i]<<" ";
}

// Worst Time C = O(n*2)  Best Time C = O(n) 
// Space C = O(1) of bubble sort
// Bubble Sort is Adaptive & Stable
// Bubble sort is not Adaptive naturally we made it adapative using bool var.
void bubble_sort(int arr[],int n){
    for(int i = 1 ; i<n;i++){
        bool swapped = false;
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
    display(arr,5);
}

int main()
{
    int arr[ ] = {5,4,3,2,1};
    int n;
    bubble_sort(arr,5);
    return 0;
}