#include <iostream>
using namespace std;

int main()
{
    int a, b, c, hcf;
    std::cout << "Enter two no :";
    std::cin >> a >> b;

    while (true)
    {

        hcf = b;
        c = a % b;
        a = b;
        b = c;
        if (b == 0)
            break;
    }
    std::cout << "HCF is : " << hcf << endl;

    return 0;
}
