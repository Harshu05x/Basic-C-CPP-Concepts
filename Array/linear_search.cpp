// Linear search have TC of O(n).
#include <iostream>
using namespace std;

class Array{
private:
    int *A;
    int size;
    int length;
public:
    Array(){            // constructor for class
        size=10;
        length=0;
        A=new int[size];
    }
      Array(int sz, int n){    // parameterized constructor for class
        size=sz;
        length=n;
        A=new int[size];
    }
    ~Array(){           // Destructor for class
        delete []A;
    }
    void enterEle();
    int linearSearch(int x);
};

//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}

//Linear search of ele(x) in array
int Array::linearSearch(int x){
    for (int i=0;i<length;i++){
        if(x==A[i]) return i;
    }
    return -1;
}
//---------------------------------------------------------------------------------
//Improving Linaer search

// 1] Transposition method-->       (Here we swap the found ele with pervious one,
/*                                   so if we searching again then it found early)
int Array::linearSearch(int x){
    for (int i=0;i<length;i++){
        if(x==A[i]){
            swap(A[i],A[i-1]);
            return i-1;
        }
    }
    return -1;
}

// 2] Move to front method-->       (Here we swap the found ele with 1st ele,
                                      so if we searching again then it found at index 1)
int Array::linearSearch(int x){
    for (int i=0;i<length;i++){
        if(x==A[i]){
            swap(A[i],A[0]);
            return 0;
        }
    }
    return -1;
}*/
//-------------------------------------------------------------------------------------


int main(){
   Array *arr;
   int n,sz,ch;
   int x,index;

   cout<<"Enter size of array: ";
   cin>>sz;

   cout<<"Enter length: ";
   cin>>n;
   arr=new Array(sz,n); //creating dynamic array
   arr->enterEle();
   cout<<"Enter ele to be search: ";
   cin>>x;
   cout<<x<<" is found at index "<<arr->linearSearch(x);
   return 0;
}