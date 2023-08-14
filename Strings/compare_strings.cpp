#include <iostream>
using namespace std;

void compare(char A[],char B[]){
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++){
        if(A[i]!=B[j]) break;
    }
    if(A[i]==B[j]) cout<<"Both are equal."<<endl;
    else if(A[i]>B[j]) cout<<A<<" is bigger.";
    else cout<<A<<" is smaller."<<endl;
}                 
int main()
{
    char A[]="Painter";
    char B[]="Painter";
    compare(A,B);  
    return 0;
}