#include <iostream>
using namespace std;

class Complex{
    int x,y;

    public:
    Complex(int x = 0 , int y = 0){
        this->x = x;
        this->y = y;
    }

    friend void operator >> ( Complex &u, Complex &v );
    friend void operator << ( Complex &u , Complex &v );
    friend void operator + (Complex &u ,Complex &v);
    friend void operator - (Complex &u ,Complex &v);
    friend void operator * (Complex &u ,Complex &v);    
};

void operator >> (Complex &u ,Complex &v){
    cout<<"Enter X1: ";
    cin>>u.x;
    cout<<"Enter Y1: ";
    cin>>u.y;
    cout<<"Enter X2: ";
    cin>>v.x;
    cout<<"Enter Y2: ";
    cin>>v.y;
}

void operator << (Complex &u ,Complex &v){
    if(u.y > 0 && v.y > 0){
        cout<<"1st complex num : "<<u.x<<" + "<<u.y<<"i\n";
        cout<<"2nd complex num : "<<v.x<<" + "<<v.y<<"i\n";    
    }
    else if(u.y < 0 && v.y > 0){
        cout<<"1st complex num : "<<u.x<<" - "<<-u.y<<"i\n";
        cout<<"2nd complex num : "<<v.x<<" + "<<v.y<<"i\n";
    }
    else if(u.y > 0 && v.y < 0){
        cout<<"1st complex num : "<<u.x<<" + "<<u.y<<"i\n";
        cout<<"2nd complex num : "<<v.x<<" - "<<-v.y<<"i\n";
    }
    else{
        cout<<"1st complex num : "<<u.x<<" - "<<-u.y<<"i\n";
        cout<<"2nd complex num : "<<v.x<<" - "<<-v.y<<"i\n";
    }
}

void operator + (Complex &u ,Complex &v){
    Complex add;
    add.x = u.x + v.x;
    add.y = u.y + v.y;

    if(add.y > 0) cout<<"Addition: "<<add.x<<" + "<<add.y<<"i"<<endl;
    else cout<<"Addition: "<<add.x<<" - "<<abs(add.y)<<"i"<<endl;
}

void operator - (Complex &u ,Complex &v){
    Complex sub;
    sub.x = u.x - v.x;
    sub.y = u.y - v.y;

    if(sub.y > 0) cout<<"Subtraction: "<<sub.x<<" + "<<sub.y<<"i"<<endl;
    else cout<<"Subtraction: "<<sub.x<<" - "<<abs(sub.y)<<"i"<<endl;
}

void operator * (Complex &u ,Complex &v){
    Complex mult;
    mult.x = u.x * v.x - u.y * v.y;
    mult.y = u.x * v.y + u.y * v.x;
    if(mult.y > 0) cout<<"Multiplication: "<<mult.x<<" + "<<mult.y<<"i"<<endl;
    else cout<<"Multiplication: "<<mult.x<<" - "<<abs(mult.y)<<"i"<<endl;
}

int main (){
    Complex S1,S2;
    operator >>(S1,S2);
    operator <<(S1,S2);

    

    return 0;

}