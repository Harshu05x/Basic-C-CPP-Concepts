#include <iostream>
using namespace std;

void dupli(char A[]){
    int i,j;
    for(i=0;A[i]!='\0';i++){
        int count=1;
        if(A[j]!=-1){
            for(j=i+1;A[j]!='\0';j++){
                if(A[i]==A[j]) {
                    count++;
                    A[j]=-1;
                }
            }
        }
        if(count>1) cout<<A[i]<<endl;
    }
}
void dupliCount2(char B[]){
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
{ 
     char A[]="hahailoveu";
     dupli(A);


    return 0;
}