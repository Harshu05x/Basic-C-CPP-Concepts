#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int n, m, rem;
    float sum = 0;
    cout << "enter the num:";
    cin >> n;
    cout << "digits are: ";
    m = n;

    string str = to_string(n);

    int c = str.length();

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, c);
        cout << rem << " ";
        n = n / 10;
    }

    cout << endl;
    cout << "sum is : " << sum << endl;

    if (sum == m)
        cout << "So " << m << " is a armstrong no.";
    else
        cout << "So " << m << " is not a armstrong no.";
    
    return 0;
}
