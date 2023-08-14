//Q] Tower of Honai --> 
/*Initially, all the disks are placed on one rod, 
one over the other in ascending order of size similar to a cone-shaped tower. 
The objective of this problem is to move the stack of disks from the initial rod to
another rod, following these rules: 
1]A disk cannot be placed on top of a smaller disk.
2]Move one disk at a time.
The goal is to move all the disks from the leftmost rod to the rightmost rod. 
To move N disks from one rod to another, 2^𝑁−1 steps are required.
So, to move 3 disks from starting the rod to the ending rod, a total of 7 steps are required.*/

#include <iostream>
#include <bits/stdc++.h>// This libary is included for using pow function.
using namespace std;

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"Move "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n;
    int A=1,B=2,C=3;
    cout<<"Enter no of disks: ";
    cin>>n;
    cout<<"No of steps required are: "<<pow(2,n)-1<<endl;
    TOH(n,A,B,C);
}