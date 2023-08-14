#include <iostream>
using namespace std;

void count(string A){
    int i;
    int vowels=0;
    int conso=0;
    int words=1;
    for(i=0; A[i]!='\0';i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
            vowels++;
        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
            conso++;
        if(A[i]==' ' && A[i-1]!=' ') words++;
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonents: "<<conso<<endl;
    cout<<"Words: "<<words<<endl;
}
int main()
{
    string A="How are you Harsh";
    count(A);    
    return 0;
}