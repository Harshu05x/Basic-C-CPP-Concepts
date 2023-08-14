#include <iostream>
using namespace std;

void lowerCase(char A[]){
    int i;
    for(i=0;A[i]!='\0';i++) A[i]+=32;    // Diff between ascii codes of upper and lower case is 32.
    cout<<A;
}   
void upperCase(char A[]){
    int i;
    for(i=0;A[i]!='\0';i++) A[i]-=32;    
    cout<<A;
}   
void changeCase(char A[]){
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90)  A[i]+=32; 
        else if (A[i]>=97 && A[i]<=122) A[i]-=32;
    } 
    cout<<A;
}   
int main()
{
    char A[]="WELCOME"; 
    lowerCase(A);
    cout<<endl;
    upperCase(A);
    cout<<endl;

    char B[]="WelCOme";
    changeCase(B);
    
    return 0;
}