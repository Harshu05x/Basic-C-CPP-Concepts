//Q] No of ways to Place tiles of size 1xm in a floor of size nxm.

#include <iostream>
using namespace std;

int totalWays(int n, int m){
    if (n==m) return 2; /*Here we only place tiles in either horizontal or
                            vertical way. so we have 2 ways here.*/
    if (n<m) return 1; //Here we have to place only in horizontal way.

    // place horizontally
    int x=totalWays(n-1,m);

    // place vertically
    int y=totalWays(n-m,m);
    return x+y;

}

int main (){
    int n=4 , m=2;
    cout<<totalWays(n,m);
    return 0;

}
