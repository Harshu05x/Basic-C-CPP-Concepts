#include <iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[],int l,int h){
    int pivot = arr[l];
    int i = l , j = h;

    do{
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < j) swap(arr[i],arr[j]);
    }while(i < j);
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort(int arr[],int l,int h){
    int j;
    if(l < h){
        j = partition(arr,l,h);
        quick_sort(arr,l,j-1);
        quick_sort(arr,j+1,h);
    }
}

int main()
{
     
    int arr[ ] = {12,11,10,9,8,7,6,5,4,3,2,1};
    int n;
    quick_sort(arr,0,12);
    display(arr,12);

    return 0;
}