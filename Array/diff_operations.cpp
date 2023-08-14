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
    int get(int index);
    void set(int x, int index);
    int max();
    int min();
    int sum();
    int rSum(int n);
    int avg();
};

//Enter all elememts in array.
void Array::enterEle(){
    cout<<"Enter all elements: ";
    for(int i=0;i<length;i++){
        cin>>A[i];  
    }
}

// Get ele at given index.
int Array::get(int index){
    if(index>=0 && index<length) return A[index];
}

// Set a value(x) for given index
void Array::set(int x, int index){
    A[index]=x;
    cout<<x<<" is set at index "<<index<<endl;
}

// Gives us max ele in array
int Array::max(){
    int max=A[0];
    for(int i=1;i<length;i++){
        if(A[i]>max) max=A[i];
    }
    return max;
}

// Gives us min ele in array
int Array::min(){
    int min=A[0];
    for(int i=1;i<length;i++){
        if(A[i]<min) min=A[i];
    }
    return min;
}

// Gives us sum of all ele in array
int Array::sum(){
    int total=0;
    for (int i=0;i<length;i++){
        total+=A[i];
    }
    return total;
}

// Recursive fun for finding sum
int Array::rSum(int n){
    if(n<0) return 0;
    return rSum(n-1)+A[n];
}

// Gives us avg of all ele in array
int Array::avg(){
    float total=0;
    for(int i=0;i<length;i++) total+=A[i];
    return (total/length);
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

    do {
        cout<<"------------------------";
        cout<<"\n-*- MENU -*-\n";
        cout<<"1. Get Element\n";
        cout<<"2. Set Element\n";
        cout<<"3. Maximum\n";
        cout<<"4. Minimum\n";
        cout<<"5. Sum\n";
        cout<<"6. Avg\n";
        cout<<"7. EXIT\n";
        cout<<"------------------------";
        cout<<endl;

        cout<<"enter you choice ";
        cin>>ch;

        switch (ch)
        {
        case 1: cout<<"Enter the index: ";
                cin>>index;
                cout<<"Element is: "<<arr->get(index)<<endl;
            break;
        case 2: cout<<"Enter element to be set: ";
                cin>>x;
                cout<<"Enter the index: ";
                cin>>index;
                arr->set(x,index); 
            break;
        case 3: cout<<"Maximum ele is "<<arr->max()<<endl;
            break; 
        case 4: cout<<"Minimum ele is "<<arr->min()<<endl;
            break; 
        case 5: cout<<"Sum of all ele is "<<arr->sum()<<endl;
            break; 
        case 6: cout<<"Avarge of all ele is "<<arr->avg()<<endl;
            break; 
        }
    }while(ch<7);

   return 0;
}