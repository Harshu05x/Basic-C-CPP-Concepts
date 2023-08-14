#include <iostream>
using namespace std;

template<class T>
class Array{
private:
    T *A;
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
        A=new T[size];
    }
      Array(int sz, int n){    // parameterized constructor for class
        size=sz;
        length=n;
        A=new T[size];
    }
    ~Array(){           // Destructor for class
        delete []A;
    }
    void enterEle();
    void display();
    void append(T x);
    void insert(T x, int index);
    void del(int index);
    T linearSearch(T x);
    T binSearch(T x);
    void reverse();
};
//Enter all elememts in array.
template<class T>
void Array<T>::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}
//Display all elements in array.
template<class T>
void Array<T>::display(){
    cout<<endl;
    cout<<"Elements are:\n";
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
//Adding an ele(x) at the end of array
template<class T>
void Array<T>::append(T x){
    cout<<endl;
    if(length<size){
        cout<<x<<" is appended at index "<<length<<endl;
        A[length]=x;
        length++;
    }
    else{
    cout<<"Length is greater than size.\nElement can't be append.";
    }
} 
//Insert given ele(x) at given index
template<class T>
void Array<T>::insert(T x,int index){
    cout<<endl;
    if (index>=0 && index<=length){
        cout<<x<<" is inserted at index "<<index<<endl;
        for(int i=length-1;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
    else{
    cout<<"Index is greater than length.\nElement can't be inserted.";
    }
}
//Deleting ele of given index
template<class T>
void Array<T>::del(int index){
    T x=0;
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
//Linear search of ele(x) in array
template<class T>
T Array<T>::linearSearch(T x){
    for (int i=0;i<length;i++){
        if(x==A[i]) return i;
    }
    return -1;
}
// Binary Search of ele(x) in array
template<class T>
T Array<T>::binSearch( T x){
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

// Reverse an array by swapping ele
template<class T>
void Array<T>::reverse(){
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
   Array<int> *arr;
   int n,sz,ch;
   int x,index;

   cout<<"Enter size of array: ";
   cin>>sz;

   cout<<"Enter length: ";
   cin>>n;
   arr=new Array<int>(sz,n); //creating dynamic array
   arr->enterEle();
   do{
    cout<<"------------------------";
    cout<<"\n-*- MENU -*-\n";
    cout<<"1. Display\n";
    cout<<"2. Insert\n";
    cout<<"3. Append\n";
    cout<<"4. Delete\n";
    cout<<"5. Linear Search\n";
    cout<<"6. Binary Search\n";
    cout<<"7. Reverse\n";
    cout<<"8. Exit\n";
    cout<<"------------------------";

    cout<<endl;
    cout<<"enter you choice ";
    cin>>ch;
    cout<<endl;

    switch (ch)
    {
    case 1: arr->display();
            cout<<endl;
        break;

    case 2:cout<<"Enter element to be insert: ";
           cin>>x;
           cout<<"Enter the index: ";
           cin>>index;
           arr->insert(x,index); 
           cout<<endl;   
        break;

    case 3:cout<<"Enter element to be append: ";
           cin>>x;
           arr->append(x); 
           cout<<endl;
        break;
    
    case 4: cout<<"Enter the index of ele to be deleted: ";
            cin>>index;
            arr->del(index);
            cout<<endl;
        break;
    
    case 5: cout<<"Enter ele to be search: ";
            cin>>x;
            cout<<x<<" is found at index "<<arr->linearSearch(x);
            cout<<endl;
        break;
    
    case 6:cout<<"Enter ele to be search: ";
           cin>>x;
           cout<<x<<" is found at index "<<arr->binSearch(x);
           cout<<endl;
        break;

    case 7: arr->reverse();
            cout<<endl;
        break;
    default:
        break;
    }
   }while(ch<8);
   return 0;
}