
#include <iostream>
using namespace std;

int main(){
    int n;
    int A[n];
    int c=1;
cin>>n;
for (int i=0; i<n; i++){
    cin>>A[i];
    c=A[i]*c;
}
cout<<c;
return 0;
}
