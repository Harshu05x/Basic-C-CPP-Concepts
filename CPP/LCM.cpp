#include<iostream>
using namespace std;

int main(){
   int a, b, c, lcm;
std::cout<<"Enter two no :";
std::cin>>a>>b;

while(true){

    lcm=a;
    c=a%b;
    if(c==0)break;
        a=a*2;

}std::cout<<"LCM is : "<<lcm<<endl;



return 0;
}

