#include <iostream>
using namespace std;

void dupli(int A[]){
    int lastDupli=0;
    for(int i=0; i<10; i++){
        if(A[i]==A[i+1] && A[i]!=lastDupli){
            cout<<"Duplicate ele is: "<<A[i]<<endl;
            lastDupli=A[i];
        }
    }
} 

void dupliCount(int A[]){
    for(int i=0; i<10-1;i++){
        if(A[i]==A[i+1]){
            int j=i+1;
            while(A[j]==A[i]) j++; 
            cout<<A[i]<<" is duplicate for "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
}
//Using Hash table / Bitset method. It has TC of O(n).
void dupliCount1(int A[]){
    int *H;
    H=new int[20];
    for(int i=0;i<20;i++) H[i]=0; 
    for (int i=0;i<10;i++) H[A[i]]++;
    for (int i=0;i<=20;i++){
        if(H[i]>1) cout<<i<<" is duplicate "<<H[i]<<" times."<<endl;
    }
}
// For unsorted array->                 It has TC of O(n**2).
void dupliCount2(int B[]){
    int n=10;
    for(int i=0;i<10-1;i++){
        int count=1;
        if(B[i]!=-1){
            for (int j=i+1;j<n;j++){
                if(B[i]==B[j]){
                    count++;
                    B[j]=-1;
                }
            }
        }
        if (count>1) cout<<B[i]<<" is duplicate for "<<count<<" times"<<endl;
    }
}

int main()
{   int A[10]={3,6,8,8,10,12,15,15,15,20}; 
    int B[]={8,3,6,4,6,5,6,8,2,7};
    // dupli(A);
    // dupliCount(A);
    // dupliCount1(A);

    dupliCount2(B);
    return 0;
}