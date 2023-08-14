// Subarray--> continuous part of array. No of subarrays= {nC2+n} = n*(n+1)/2.
// Subsequence--> it is a sequence that can be derived an array by selecting zero or more ele,
//                  without changing the order of the remaining ele. No of subsequence= 2**n. 

#include <iostream>
using namespace std;
                   
int sumSubarrays(int A[],int n){
    int curr=0;
    for(int i=0; i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=A[j];
            cout<<curr<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n];  
    cout<<"Enter ele in array: ";
    for(int i=0; i<n; i++) cin>>A[i];
    cout<<endl;
    sumSubarrays(A,n);
    return 0;
}