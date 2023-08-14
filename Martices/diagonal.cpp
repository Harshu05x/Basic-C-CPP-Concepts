#include <iostream>
using namespace std;

// Diagonal Matrix-->
// M[i,j] != 0 if i == j                 
// M[i,j] == 0 if i != j        
         
class Matrix{
   
    int n; 
    int *A;
    public:

    Matrix(int n){
        A = new int[n];
        this->n = n;
        for(int i=0;i<n;i++){
            cout<<"Enter num: ";
            cin>>A[i];
        }
    }
    ~Matrix(){
        delete []A;
    }
    int getEle(Matrix &M);
    void setEle(Matrix &M);
    void display(Matrix &M,int n);
};
int Matrix::getEle(Matrix &M){
    int i,j;
    cout<<"Enter i: ";
    cin>>i;
    cout<<"Enter j: ";
    cin>>j;
    if(i != j) return 0;
    else return M.A[i-1];
}
void Matrix::setEle(Matrix &M){
    int i,j,x;
    cout<<"Enter i: ";
    cin>>i;
    cout<<"Enter j: ";
    cin>>j;
    
    if(i != j) return ;
    else{
        cout<<"Enter ele: ";
        cin>>x;
        M.A[i-1] = x;
    }
}

void Matrix::display(Matrix &M,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j) cout<<M.A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{   
    int n;
    cout<<"Enter no of rows and columns: ";
    cin>>n;
    Matrix M1(n);
    M1.display(M1,n);
    cout<<endl;

    // M1.setEle(M1);
    M1.display(M1,n);

    // cout<<getEle(M1);


     
    return 0;
}