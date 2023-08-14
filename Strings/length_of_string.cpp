#include <iostream>
using namespace std;

int length(string a){
    int i;
    for(i=0;a[i]!='\0';i++){  }
    return i;
}                 
int main()
{
    char s[]="welcome";
    string a="welcome";
    cout<<s<<" "<<a;
    // gets(s);            //it takes multiple words as input.
    // cout<<s;   
    cout<<"\nlength of string is: "<<length(a);
    return 0;
}