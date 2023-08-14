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
    void display();
};
//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}
//Display all elements in array.
void Array::display(){
    cout<<"Elements are:\n";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
   Array *arr;
   int n,sz;
   int x,index;

   cout<<"Enter size of array: ";
   cin>>sz;

   cout<<"Enter length: ";
   cin>>n;
   arr=new Array(sz,n); //creating dynamic array
  
   arr->enterEle();
   arr->display();
   return 0;
}