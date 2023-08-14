#include<iostream>
using namespace std;

int main(){
int A[5], n=5, key;
cout<<"Enter numbers: "<<endl;
for(int i=0; i<n; i++){
    cin>>A[i];
}
cout<<"Enter key: ";
cin>>key;
for(int i=0; i<n; i++){
    if(key==A[i]){
        cout<<"key is found at "<<i;
        return 0;
    }
}cout<<"key is not found";


}
