// AMAZON & ORACLE QUE-->
/* Given an array of size n.The task is to find the 1st repeating element in the array of integers,
    i.e. an ele that occurs more than once and whose index of 1st occurrence is smaller.*/

#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int repeateEle(int A[],int n) {

}                 
int main()
{
    int n;
    int min_idx=INT_MAX;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i];

    int B[100];
    for(int i=0;i<100;i++) B[i]=-1;

    for(int i=0;i<n;i++){
        if(B[A[i]]!=-1) min_idx=min(min_idx,B[A[i]]);
        else B[A[i]]=i;
    }
    if(min_idx==INT_MAX) cout<<"-1"<<endl;
    else cout<<min_idx+1<<endl;
    
    return 0;
}