//Q] count total paths in a maze to move from (0,0) to (n,m).
//rule--> u can only move in right or in down direction.

#include <iostream>
using namespace std;

int total_paths(int i, int j, int n, int m){
    if(i==n || j==m) return 0;
    if (i==n-1 && j==m-1) return 1;

    // move right
    int rightPaths=total_paths(i,j+1,n,m);

    // move down 
    int downPaths=total_paths(i+1,j,n,m);

    return rightPaths+downPaths;
}

int main(){
    int n=3, m=4;
    cout<<total_paths(0,0,n,m);
    return 0;
}