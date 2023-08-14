#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

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

void Insert(Node** ptrBins, int idx){
    Node* temp = new Node;
    temp->data = idx;
    temp->next = nullptr;
 
    if (ptrBins[idx] == nullptr){ // ptrBins[idx] is head ptr
        ptrBins[idx] = temp;
    } else {
        Node* p = ptrBins[idx];
        while (p->next != nullptr){
            p = p->next;
        }
        p->next = temp;
    }
}
int Delete(Node** ptrBins, int idx){
    Node* p = ptrBins[idx];  // ptrBins[idx] is head ptr
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->data;
    delete p;
    return x;
}

void bins_sort(int A[],int n ){
    int max = findMax(A,n);
    Node **bins;
    bins = new Node *[max + 1];
    
    for(int i = 0; i < max+1; i++) bins[i] = NULL;
    for(int i = 0; i < n; i++) Insert(bins,A[i]);
    int i,j; i = 0; j = 0;

    while(i < max + 1 ){
        while(bins[i] != NULL){
            A[j++] = Delete(bins,i);
        }
        i++;
    }
    delete [] bins;
}


int main()
{
    int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
    bins_sort(A,8);
    display(A,8);
    return 0;
}