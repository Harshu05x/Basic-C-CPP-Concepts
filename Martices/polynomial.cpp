#include <iostream>
#include <math.h>
using namespace std;
class Term{
    public: 
    int coeff;
    int exp;
};

class Poly{
    public:
    int num;
    Term *term;

    Poly(int num){
        this->num = num;
        term = new Term[num];
    }
    void create();
    void display();
    int result(int x);
    void add(Poly *P1,Poly *P2);

};
void Poly :: create(){
    for(int i=0;i<num;i++){
        cout<<"Enter term no "<<i+1<<":"<<endl;
        cout<<"Coeff: ";
        cin>>this->term[i].coeff;
        cout<<"Expo: ";
        cin>>this->term[i].exp;

    }
}
void Poly :: display(){
    cout<<this->term[0].coeff<<"x"<<this->term[0].exp;
    for(int i=1;i<num;i++){
        if(this->term[i].exp != 0)
            cout<<" + "<<this->term[i].coeff<<"x"<<this->term[i].exp;
        else 
            cout<<" + "<<this->term[i].coeff;
    }
}

int Poly :: result(int x){
    int ans = 0;
    for(int i=0;i<num;i++)
        ans += this->term[i].coeff * pow(x,this->term[i].exp);
    return ans;
}

void Poly :: add(Poly *P1, Poly *P2){
    
    int num = P1->num > P2->num ? P1->num : P2->num; 
    Poly *P3;
    P3 = new Poly(num);
    int i,j,k; 
    i = j = k = 0;
    while(i < P1->num && j < P2->num  ){
        if(P1->term[i].exp > P2->term[j].exp)
            P3->term[k++] = P1->term[i++];
        else if(P1->term[i].exp < P2->term[j].exp)
            P3->term[k++] = P2->term[j++];
        else {
            P3->term[k].exp = P1->term[i].exp;
            P3->term[k++].coeff = P1->term[i++].coeff + P2->term[j++].coeff;
        }
    }
    while(i < P1->num) P3->term[k++] = P1->term[i++];
    while(j < P2->num) P3->term[k++] = P2->term[i++];
    P3->display();

}

int main()
{   
    cout<<"Enter total no of non zero terms: ";
    int num;
    cin>>num;
    cout<<"Enter 1st poly: "<<endl;
    Poly *P1;
    P1 = new Poly(num);
    P1->create();

    cout<<"Enter total no of non zero terms: ";
    cin>>num;
    cout<<"Enter 2nd poly: "<<endl;
    Poly *P2;
    P2 = new Poly(num);
    P2->create();

    cout<<"3rd poly: "<<endl;
    P1->add(P1,P2);
    
    
    // int x;
    // cout<<"Enter X: ";
    // cin>>x;
    // cout<<"Result: "<<P1.result(x);
    
    return 0;
}