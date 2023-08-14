#include <iostream>
using namespace std;

void permu(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
    }
    for(int i=0; i<str.length();i++){
        char ch=str[i];
        string newstr = str.substr(0,i)+str.substr(i+1);
        permu(newstr, ans+ch);
    }

}

int main(){
    permu("ABCD","");
    return 0;
}