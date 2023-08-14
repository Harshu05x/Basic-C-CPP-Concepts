#include <iostream>
using namespace std;

void reverse(char A[]){
    char B[7];
    int i;
    for(i=0;A[i]!='\0';i++){}
    i=i-1;
    int j;
    for( j=0; i>=0; i--,j++) B[j]=A[i];
    B[j]='\0';
    cout<<B;
} 
string reverse1(char A[]){
    int i;
    int j;
    char b;
    for(j=0;A[j]!='\0';j++){}
    j=j-1;
    for(i=0;i<j;i++,j--){
        b=A[i];
        A[i]=A[j];
        A[j]=b;
    }
    string x=A;
    return x;
}
void palindrome(char A[]){
    int i,j;
    for(j=0;A[j]!='\0';j++){}
    // j=j-1;
    bool result=false;
    for(i=0,j=j-1;i<=j;i++,j--){
        if(A[i]!=A[j]) {
            result=true;
            break;
        }
    }
    if(result) cout<<"not palindrome"<<endl;
    else cout<<"palindrome"<<endl;

}
int main()
{
    char A[]="abc"; 
    char B[]="madam";
    // reverse(A); 
    // string x=reverse1(A); 
    // cout<<x; 
    palindrome(A);
    palindrome(B);
    return 0;
}