#include <iostream>
using namespace std;

// Lower Triangular Matrix-->
// M[i,j] != 0 if i >= j
// M[i,j] == 0 if i < j
// total no of non-zero ele = n(n+1)/2
// total no of zeros = n(n-1)/2
// Accessing ele-->
// Row major mapping--> i*(i-1)/2+j-1
// Column major mapping--> [n*(j-1)-((j-2)*(j-1))/2+i-j]

class Matrix{
    int n;
    int *A;

    public:
    Matrix(int n){
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    ~Matrix(){
        delete []A;
    }
    void create(Matrix &M);
    void create_01(Matrix &M);
    void display(Matrix &M);
    void display_01(Matrix &M);
};
// Store ele by row major mapping
void Matrix::create(Matrix &M){
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<"Enter ("<<i<<","<<j<<"): ";
                cin>>A[k++];
            }
        }
    }
}
// Store ele by column major mapping
void Matrix::create_01(Matrix &M){
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<"Enter ("<<j<<","<<i<<"): ";
                cin>>A[k++];
            }
        }
    }
}
// display for Row major mapping
void Matrix::display(Matrix &M){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<A[i*(i-1)/2+j-1]<<" ";
            else cout<<A[i*(i-1)/2+j-1]<<" ";
        }
        cout<<endl;
    }
}
// display for column major mapping
void Matrix::display_01(Matrix &M){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j) cout<<A[n*(j-1)-((j-2)*(j-1))/2+i-j]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter no of rows and columns: ";
    int n;
    cin>>n;

    Matrix M1(n);
    M1.create(M1);
    M1.display(M1);
     
    return 0;
}