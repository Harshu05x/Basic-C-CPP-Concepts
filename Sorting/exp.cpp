#include <iostream>
using namespace std;

class Test{
    mutable int a;
    mutable int b;
    public:
    Test(){a = b = 0;}
    void change()const{
    a = a + 10;//Error: lal cannot be modified
//because it is being accessed through a const object
    b = b + 20;// No error for this line as b is mutable
    }
    void display()const{
        cout<<a<<" "<<b;
    }
};                 
int main(){
    const Test obj;
    obj.change();
    obj.display();
    return 0;
}