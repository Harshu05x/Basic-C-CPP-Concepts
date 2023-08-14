#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void print(){
        cout<<"Base class";
    }
};

class Dog: public Animal{
    public:
    void print(){
        cout<<"Dog class";
    }
};

                   
int main()
{
    Animal* a = new Dog;
    a->print();

    Dog* b = (Dog*) new Animal;
    b->print();
    return 0;
}