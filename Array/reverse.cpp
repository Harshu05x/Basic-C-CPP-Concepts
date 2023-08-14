#include <iostream>
using namespace std;

class Array{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;}
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
    void reverse();
    void swapReverse();
    
    

};

//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}

// Reverse an array                 (It needs an extra array to reverse & also TC is O(n).)
void Array::reverse(){
    int *B;
    B=new int[length];
    for(int i=length-1,j=0;i>=0;i--,j++)  B[j]=A[i];  //this copy all ele of A in B.
    cout<<"Reversed array is:\n";
    for(int i=0;i<length;i++){ 
        A[i]=B[i];                                   //this copy all ele of B in A.
        cout<<A[i]<<" ";                             //display all elements
        }           
}

// Reverse an array by swapping ele
void Array::swapReverse(){
    int temp;
    cout<<"Reversed array is:\n";
    for(int i=0,j=length-1; i<j; i++,j--){
        swap(&A[i] ,&A[j]);                         //Swapping elements.
    }
    for(int i=0;i<length;i++){                                  
        cout<<A[i]<<" ";                           //display all elements                          
        }    
}


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
    arr->reverse();
    cout<<endl;
    arr->swapReverse();

  
   
   return 0;
}