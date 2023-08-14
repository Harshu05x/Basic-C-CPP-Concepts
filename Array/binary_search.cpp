//In binary search the given array must be sorted. Its has TC of O(logn).
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
    int binSearch(int x);
    int RbinSearch(int l, int h, int x);
};

//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}
// Binary Search of ele(x) in array
int Array::binSearch( int x){
    int l=0,mid;
    int h=length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(x==A[mid]) return mid;
        else if (x<A[mid]) h=mid-1;
        else l=mid+1;
    }    
    return -1;
}
// Recursive Binary Search of ele(x) in array
int Array::RbinSearch( int l, int h, int x){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(x==A[mid]) return mid;
        else if (x<A[mid]) RbinSearch(l,mid-1,x);
        else RbinSearch(mid+1,h,x);  
    }
    return -1;
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

   cout<<"Enter ele to be search: ";
   cin>>x;
   cout<<x<<" is found at index "<<arr->binSearch(x);
   cout<<endl<<x<<" is found at index "<<arr->RbinSearch(0,n,x);
   return 0;
}