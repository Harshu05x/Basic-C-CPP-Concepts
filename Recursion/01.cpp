#include <iostream>
using namespace std;

void fun1(int n)
{
    if(n>0)
    {
        cout<<n;//fun prints at calling time.
        fun1(n-1);
    }
}

void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n;//fun prints at returning time.
    }
}
int main()
{
    int x=3;
    fun1(x);
    cout<<endl;
    fun2(x);
    return 0;
}
