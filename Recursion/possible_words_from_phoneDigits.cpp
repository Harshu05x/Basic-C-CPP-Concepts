#include <iostream>
using namespace std;

string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void words(string str, string ans){
        if(str.length()==0){
            cout<<ans<<endl;
            return ;
        }

        char ch=str[0];
        string code=keypad[ch-'0'];
        string r=str.substr(1);

        for (int i=0; i<code.length();i++){
            words(r,ans+code[i]);

        }

}

int main(){
    words("23","");
    return 0;

}