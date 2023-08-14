//  GOOGLE KICK START QUE-->
/*  Isyana is given the number of visitors at her local theme park on N consecutive days. 
    The number of visitors on the i-th day is Vi.
    A day is record breaking if it satisfies both of the following conditions:

    1]The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
    2]Either it is the last day, or the number of visitors on the day is strictly larger than the 
      number of visitors on the following day.Note that the very first day could be a record breaking day!

    Please help Isyana find out the number of record breaking days.*/

#include <iostream>
using namespace std;
                   
int main()
{
     int n;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int A[n+1];  
    A[n]=-1;
    cout<<"Enter ele on array: ";
    for(int i=0; i<n; i++) cin>>A[i];
    if(n==1){
        cout<<'1'<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0; i<n; i++){
        if(A[i]>mx &&  A[i]>A[i+1]) ans++;
        mx=max(mx,A[i]);
    }
    cout<<"Record breaking days: "<<ans<<endl;
    return 0;
}