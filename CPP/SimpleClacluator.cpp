#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int option;
    float x,y,z;
    cout<<"Menu-:"<<endl;
    cout<<"1.Add"<<endl<<"2.Sub"<<endl<<"3.Mul"<<endl<<"4.Div"<<endl<<"5.Square"<<
    endl<<"6.Square_root"<<endl<<"7.Cube"<<endl<<"8.Cube_root"<<endl;
    cout<<"Enter the option: ";
    cin>>option;

    if(option>=1 && option<=4)
    {
        cout<<endl;
        cout<<"Enter two num:\n";
        cin>>x>>y;

        switch(option)
        {
        case 1:
            z=x+y;
            break;
        case 2:
            z=x-y;
            break;
        case 3:
            z=x*y;
            break;
        case 4:
            z=x/y;
            break;
        }
        cout<<endl;
        cout<<"The result is: "<<z<<endl;
    }

    else if(option>=5 && option<=8)
    {
        cout<<endl;
        cout<<"Enter the num: ";
        cin>>x;
        switch(option)
        {
        case 5:
            z=x*x;
            break;
        case 6:
            z=sqrt(x);
            break;
        case 7:
            z=x*x*x;
            break;
        case 8:
            z=cbrt(x);
            break;
        }
        cout<<endl;
        cout<<"The result is: "<<z<<endl;
    }

    else
    {
        cout<<" Invalid option! Please choose correct one..."<<endl;
    }
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*";
    return 0;
}
