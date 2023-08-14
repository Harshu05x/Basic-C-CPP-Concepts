#include <iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(int real = 0,int img = 0){
        this->real = real;
        this->img = img;
    }
    friend istream & operator >> (istream &in,Complex &u);
    friend ostream & operator << (ostream &out,Complex &u);
    
};

istream & operator >> (istream &in,Complex &u){
    cout<<"Enter real part: ";
    in>>u.real;
    cout<<"Enter img part: ";
    in>>u.img;
}

ostream & operator << (ostream &out,Complex &u){
    cout<<"Complex num: "<<endl;
    if(u.img < 0) out<<u.real<<" - "<<-u.img<<"i "<<endl;
    else out<<u.real<<" + "<<u.img<<"i "<<endl;
}

int main()
{
    Complex C1;
    cin>>C1;
    cout<<C1;
    return 0;
}