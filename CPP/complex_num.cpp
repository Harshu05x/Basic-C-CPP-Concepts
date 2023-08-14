#include <iostream>
using namespace std;

class Complex{
    int x,y;

    public:
    Complex(){
        this->x = 0;
        this->y = 0;
    }

    friend void operator >> ( Complex &u, Complex &v ){
        cout<<"Enter X1: ";
        cin>>u.x;
        cout<<"Enter Y1: ";
        cin>>u.y;
        cout<<"Enter X2: ";
        cin>>v.x;
        cout<<"Enter Y2: ";
        cin>>v.y;
    }

    friend void operator << ( Complex &u , Complex &v ){
        cout<<"1st complex num : "<<u.x<<" + "<<u.y<<"i\n";
        cout<<"2nd complex num : "<<v.x<<" + "<<v.y<<"i\n";
    }

    Complex operator + ( Complex &v ){
        Complex add;
        add.x = x + v.x;
        add.y = y + v.y;

        if(add.y > 0) cout<<"Addition: "<<add.x<<" + "<<add.y<<"i"<<endl;
        else cout<<"Addition: "<<add.x<<" - "<<abs(add.y)<<"i"<<endl;
    }
    Complex operator - ( Complex &v ){
        Complex add;
        add.x = x - v.x;
        add.y = y - v.y;

        if(add.y > 0) cout<<"Subtraction: "<<add.x<<" + "<<add.y<<"i"<<endl;
        else cout<<"Subtraction: "<<add.x<<" - "<<abs(add.y)<<"i"<<endl;
    }

    Complex operator * ( Complex &v ){
        Complex mult;
        mult.x = x * v.x - y * v.y;
        mult.y = x * v.y + y * v.x;
        if(mult.y > 0) cout<<"Multiplication: "<<mult.x<<" + "<<mult.y<<"i"<<endl;
        else cout<<"Multiplication: "<<mult.x<<" - "<<abs(mult.y)<<"i"<<endl;

    }

};

int main (){
    Complex S1,S2;
    operator >>(S1,S2);
    operator <<(S1,S2);

    Complex S3;
    int ch;
    char des;

    do{
        cout<<"\n\tMenu"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1: S3 = S1 + S2;
                    break;

            case 2: S3 = S1 - S2;
                    break;

            case 3: S3 = S1 * S2;
                    break;

            default : cout<<"Invalid Option";
        }
        cout<<"Do u want to continue(y/n): ";
        cin>>des; 

    }while(des == 'y');

    return 0;

}