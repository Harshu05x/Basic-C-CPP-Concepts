//  GOOGLE KICK START QUE-->
/*  An arithmetic array is an array that contains at least two 
    integers and the differences between consecutive integers are equal.
    For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, 
    while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

    Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. 
    She wants to choose a contiguous arithmetic subarray from her array that has the maximum length.
    Please help her to determine the length of the longest contiguous arithmetic subarray.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i];

    int ans=2;          // at least length of subarray is 2.
    int pd=A[1]-A[0];   // previous diff
    int curr=2;         // current length of subsarray
    int j=2;            // while loop iterator

    while(j<n){
        if(pd==A[j]-A[j-1]) curr++;
        else {
            pd=A[j]-A[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }

    cout<<"Max length: "<<ans<<endl;
    return 0;
}