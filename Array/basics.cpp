#include <iostream>
using namespace std;

int main(){
    // Declearing arrays-->
    int A[5];
    int B[5]={2,4,6,8,10};
    int C[5]={2,4};
    int D[]={2,4,6,8,10};
//---------------------------------------------------------
    // Accessing all elements in array-->
    for (int i=0;i<sizeof(B);i++){
        cout<<B[i]<<endl;
            // or
        cout<<i[B]<<endl;
            // or
        cout<<*(B+i)<<endl;
    }
//---------------------------------------------------------
    // Resize an Array-->
    int *p=new int[5];
    int *q=new int[10];
    for (int i=0;i<sizeof(p);i++){
        q[i]=p[i];}
    delete p;
    p=q;
    q=NULL;
//---------------------------------------------------------
    // Declearing 2D arrays--> 
    
    // This will create total array in stack.
    int E[3][4];
    int F[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
        // or
    // This will create partial array in stack & partial in heap.
    int *G[3]; 
    G[0]=new int [4];
    G[1]=new int [4];
    G[2]=new int [4];
        // or
    // This will create total array in heap.
    int **H; 
    H=new int *[3];
    H[0]=new int [4];
    H[1]=new int [4];
    H[2]=new int [4];
//---------------------------------------------------------
    // Accessing elements in 2D array-->
    // we use nested for loop for accessing elements in 2D array.
    int i,j;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<H[i][j]<<endl;
        }
    }

    // Accessing element by pointer arithmetic-->
    cout<<*(*(H+i)+j)<<endl; //It gives exact element at (i,j).
    cout<<(*(H+i)+j)<<endl;  //It gives address of element at (i,j).
    cout<<*(H+j)<<endl;      //It gives address of element at (i,0).
//---------------------------------------------------------
    // Formulas-->
    // This formulas used by compiler for obtaing runtime address.
    /* 1] Address(A[i]) = [base address + i*sizeofDataType]
       2] Row major maping for A[m][n] --> Address(A[i][j]) = [base address + (i*n+j)*sizeofDataType]
       3] Column major maping for A[m][n] --> Address(A[i][j]) = [base address + (j*m+i)*sizeofDataType] 
       4] Row major maping for A[l][m][n] --> 
                Address(A[i][j][k]) = [base address + (i*m*n + j*n + k)*sizeofDataType]
       5] Column major maping for A[l][m][n] -->
                Address(A[i][j][k]) = [base address + (k*l*m + j*l + i)*sizeofDataType] */
}