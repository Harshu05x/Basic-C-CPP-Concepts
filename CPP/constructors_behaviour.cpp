#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base Class Default" << endl;
	}
	Base(int x)
	{
		cout << "Base Class Param " << x << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "Derived Class Default" << endl;
	}

	Derived(int a)
	{
		cout << "Derived Class Param" << endl;
	}
	Derived(int x, int a) : Base(x)
	{
		cout << "Derived Class Param " << a << endl;
	}
};

int main()
{

	Derived D1;
	cout << "--------------" << endl;
	Derived D2(5);
	cout << "--------------" << endl;
	Derived D3(4, 5);
}