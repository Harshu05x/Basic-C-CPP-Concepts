#include <iostream>
using namespace std;

void substr(string str, string ans){
    if (str.length()==0){ 
        cout<<ans<<endl;
        return;}
     char ch=str[0];
     int ascii=ch;
     string r = str.substr(1);
     substr(r,ans);
     substr(r,ans+ch);
     substr(r,ans+to_string(ascii));

}

int main(){
    substr("AB","");
    return 0;
}