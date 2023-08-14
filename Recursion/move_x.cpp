#include <iostream>
using namespace std;

string move_x(string str){
    if(str.length()==0) return "";

    char ch = str[0];
    string ans = move_x(str.substr(1));
    if (ch=='x') return ans+ch;
    else return ch+ans;
}

int main(){

    cout<<move_x("abxxbretydhxxfexxabcd");
    return 0;
}