#include <iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(){                // constructor for class
            size=10;
            length=0;
            A=new int[size];
        }
        Array(int sz, int n){     // parameterized constructor for class
            size=sz;
            length=n;
            A=new int[size];
        }
        ~Array(){               // Destructor for class
            delete []A;
        }
        void enterEle();
        void del(int index);

};
//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}
//Deleting ele of given index
void Array::del(int index){
    int x=0;
    if(index>=0 && index<=length){
        x=A[index];
        cout<<x<<" is deleted.";
        for (int i=index;i<length-1;i++){
        A[i]=A[i+1];
        }
        length--;
    }
    else{
    cout<<"Index is greater than length.\nElement can't be deleted.";
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
   
   cout<<"Enter the ele to be deleted: ";
   cin>>x;
   arr->del(x);
}