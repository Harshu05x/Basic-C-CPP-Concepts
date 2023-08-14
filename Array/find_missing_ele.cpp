#include <iostream>
using namespace std;

// If num are strating from 1.
void missingNum(int A[]){
    int n=A[9];
    int sum=0;
    for(int i=0; i<10; i++) sum+=A[i];
    int s=n*(n+1)/2;
    cout<<"Misssing ele is: "<<s-sum<<endl;
}

// If num are not strating from 1.
void missingNum1(int A[]){
    int l=A[0];
    int h=A[9];
    int diff=l-0;
    for (int i=0; i<10;i++){
        if(A[i]-i != diff) {
            cout<<"Missing ele is: "<<i+diff;
            break;
        }
    }

}

//If multiple ele are missing.It has TC of O(n**2).
void missingNum2(int A[]){
    int diff=A[0]-0;
    for (int i=0; i<10;i++){
        if(A[i]-i != diff) {
            while(diff<A[i]-i){
                cout<<"Missinf ele is: "<<i+diff<<endl;
                diff++;
            }
        }
    }
}

//Using Hash table / Bitset method. It has TC of O(n).Its a better apporch.
void missingNum3(int A[]){
    int l=3;
    int h=12;
    int *H;
    H=new int[h];
    for(int i=0;i<h;i++) H[i]=0;            //Initilize all ele in H with 0.
    for(int i=0;i<h;i++) H[A[i]]++;         //make 1 for persent ele.
    for(int i=l;i<=h;i++) 
        if(H[i]==0) cout<<"Missing ele is: "<<i<<endl;    //print index haing 0 val
} 

int main()
{   int A[10]={1,2,3,5,6,8,9,13,14};
    int B[10]={3,7,4,9,12,6,1,11,2,10};
    // missingNum(A);
    // missingNum1(A);
    // missingNum2(A);
    missingNum3(B);
    return 0;
}