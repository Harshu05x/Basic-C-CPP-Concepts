#include <iostream>
using namespace std;

int main()
{
    class rectangle
    {
    public:
        int length, breadth;

        int area()
        {
            return length*breadth;
        }
        int primeter()
        {
            return 2*(length+breadth);
        }

    };
    rectangle r1;
     r1.length=10;
      r1.breadth=5;
    cout<<"Area is : "<<r1.area()<<endl;
    cout<<"Primeter is : "<<r1.primeter()<<endl;
    return 0;

}
