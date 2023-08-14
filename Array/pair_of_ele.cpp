// Q] Find a pair of elements such that their sum is equal to given num.
#include <iostream>
using namespace std;

//This method has TC of O(n**2).    
void Pair(int A[],int s){
    cout<<"Pairs are-->\n";
    for(int i=0;i<10-1;i++){
        for(int j=i+1;j<10;j++){
            if(A[i]+A[j]==s) cout<<"("<<A[i]<<","<<A[j]<<")"<<endl;
        }
    }
}

// Hash Table / Bitset method
void Pair1(int A[],int s){
    int *H;
    H=new int[16];
    for(int i=0;i<16;i++) H[i]=0; 
    for (int i=0;i<10;i++) {
        if(H[s-A[i]]!=0) cout<<"("<<A[i]<<","<<s-A[i]<<")"<<endl;
        H[A[i]]++;
    }
    for(int i=0;i<16;i++) cout<<H[i]; 
}


int main()
{
    int A[]={6,3,8,10,16,7,5,2,9,14};
    int sum=10;
    // Pair(A,sum);
    Pair1(A,sum);
    return 0;
} 