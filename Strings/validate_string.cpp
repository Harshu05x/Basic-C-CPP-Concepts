#include <iostream>
using namespace std;

int valid(string A){
    int i;
    bool result=true;
    for(i=0;A[i]!='\0';i++){
        if(!(A[i]>=65 && A[i]<90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57)){
                result=false;
        }
    }
    if(result)  cout<<"Valid string" <<endl;
    else cout<<"Not a Vaild String"<<endl;
 }                  
int main()
{
    string A="Harsh@1008";
    valid(A);
    return 0;
}