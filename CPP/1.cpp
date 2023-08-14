#include<iostream>

using namespace std;

int main()
{
    char s[20];
    cout<<"enter your name : ";
    cin.get(s,20);// you can use get(,) or getline(,) to input words with multipie space.
    cout<<s<<endl;
    char a[50];
    cout<<"enter your name : ";
    cin.getline(a,50);
    cout<<a<<endl;
}


