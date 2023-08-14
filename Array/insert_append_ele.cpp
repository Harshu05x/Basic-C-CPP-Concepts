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
        void append(int x);
        void insert(int x, int index);

};
//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}
//Adding an ele(x) at the end of array
void Array::append(int x){
    cout<<endl;
    if(length<size){
        cout<<x<<" is appended at "<<length<<endl;
        A[length]=x;
        length++;
    }
    else{
    cout<<"Length is greater than size.\nElement can't be append.";
    }
} 
//Insert given ele(x) at given index
void Array::insert(int x,int index){
    cout<<endl;
    if (index>=0 && index<=length){
        cout<<x<<" is inserted at "<<index<<endl;
        for(int i=length;i>index;i--){
        A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
    else{
    cout<<"Index is greater than length.\nElement can't be inserted.";
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
   
   cout<<"Enter element to be insert: ";
   cin>>x;
   cout<<"Enter the index: ";
   cin>>index;
 
   arr->enterEle();
   arr->append(x);
   arr->insert(x, index);
   return 0;
}