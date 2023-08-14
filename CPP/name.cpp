#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name:";
    //cin>>name;// read only single word.
    getline(cin,name);//read more than one words.
    cout<<"Welcome Mr. "<<name;

    return 0;
}

