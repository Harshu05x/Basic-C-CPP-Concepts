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
    void leftShift();
    void rightShift();
    void leftRotation();
    void rightRotation();
    
};

//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}

//Ele shifted left side
void Array::leftShift(){
    for(int i=0;i<length;i++){
        A[i]=A[i+1];
    }
    A[length-1]=0;
     for(int i=0;i<length;i++){                                  
        cout<<A[i]<<" ";                           //display all elements                          
        }    
}

//Ele shifted right side.
void Array::rightShift(){
    for(int i=length;i>=0;i--){
        A[i+1]=A[i];
    }
    A[0]=0;
     for(int i=0;i<length;i++){                                  
        cout<<A[i]<<" ";                           //display all elements                          
        }    
}
//Ele rotated left side
void Array::leftRotation(){
    int x=A[0];
    for(int i=0;i<length;i++){
        A[i]=A[i+1];
    }
    A[length-1]=x;
     for(int i=0;i<length;i++){                                  
        cout<<A[i]<<" ";                           //display all elements                          
        }    
}

//Ele shifted right side.
void Array::rightRotation(){
    int x=A[length-1];
    for(int i=length;i>=0;i--){
        A[i+1]=A[i];
    }
    A[0]=x;
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
    arr->leftShift();
    // arr->rightShift();
    // arr->leftRotation();
    // arr->rightRotation();
   


   
   
   return 0;
}