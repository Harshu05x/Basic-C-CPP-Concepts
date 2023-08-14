
#include<iostream>
using namespace std;
//a*b=hcf*lcm;

int main(){
   int a, b, c, lcm;
std::cout<<"Enter two no :";
std::cin>>a>>b;

while(true){

    lcm=a;
    c=a%b;
    if(c==0)break;
        a=a*2;
}
std::cout<<"LCM is : "<<lcm<<endl;

cout<<"HCF is : "<<(a*b)/lcm<<endl;


return 0;
}

