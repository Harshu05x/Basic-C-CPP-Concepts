// GOOGLE,VISA,FACEBOOK,AMAZON QUE-->
/* Given an unsorted array of size n of non -ve integers,Find a continuous 
    subarray which adds to a given num s.*/

#include <iostream>
using namespace std;
                   
int main()
{
    int n,s;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter sum: ";
    cin>>s;
    
    int A[n];  
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i]; 

    int i=0,j=0, st=-1,en=-1, sum=0;
    while(j<n && sum+A[j]<=s){
        sum+=A[j];
        j++;
    } 
    if(sum==s){
        cout<<i<<","<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=A[j];
        while (sum>s) sum-=A[i++];
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++; 
    }
    cout<<st<<","<<en<<endl;
    return 0;
}