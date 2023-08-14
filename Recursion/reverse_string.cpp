#include <iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0) return;
    
    string r = s.substr(1);//It will return a substring without 1st char.
    reverse(r);
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    reverse(s);
}