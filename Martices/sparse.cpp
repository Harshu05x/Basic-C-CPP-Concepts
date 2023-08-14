#include <iostream>
using namespace std;

class Elements{
    public:
    int i,j,x;
};

class Sparse{
    private:
    int m,n,num;
    Elements *ele;

    public:
    Sparse(int m,int n,int num){
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Elements[this->num];
    }
    ~Sparse(){
        delete []ele;
    }
    // Operator Overloading
    friend istream & operator >> (istream &is , Sparse &s);
    friend ostream & operator << (ostream &os , Sparse &s);
    Sparse operator + (Sparse &s);
};
istream & operator >> (istream &is , Sparse &s){
    cout<<"Enter non-zero elements: "<<endl;
    for(int i=0;i<s.num;i++){
        cout<<"Enter i: ";
        cin>>s.ele[i].i;
        cout<<"Enter j: ";
        cin>>s.ele[i].j; 
        cout<<"Enter x: ";
        cin>>s.ele[i].x;
    }
    return is;
}
ostream & operator << (ostream &os , Sparse &s){
    int k = 0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(s.ele[k].i == i && s.ele[k].j == j)
                cout<<s.ele[k++].x<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
    return os;
}

Sparse Sparse::operator+(Sparse &s){
    int i,j,k;
    if(this->m != s.m || this->n != s.n) return Sparse(0,0,0);

    Sparse *sum = new Sparse(m,n,this->num+s.num);

    i = j = k = 0;
    while(i < this->num && j < s.num){
        if(this->ele[i].i < s.ele[j].i) sum->ele[k++] = this->ele[i++];
        else if (this->ele[i].i > s.ele[j].i) sum->ele[k++] = s.ele[j++];
        else{
            if(this->ele[i].j < s.ele[j].j) sum->ele[k++] = this->ele[i++];
            else if(this->ele[i].j > s.ele[j].j) sum->ele[k++] = s.ele[j++];
            else{
                sum->ele[k] = this->ele[i++];
                sum->ele[k++].x += s.ele[j++].x;
            }
        }
    }
    for(;i<num;i++) sum->ele[k++] = this->ele[i];
    for(;j<s.num;j++) sum->ele[k++] = s.ele[j];
    sum->num = k;
    return *sum;

}

int main()
{   
    int m,n,num;

    cout<<"\n1st Matrix: "<<endl;
    cout<<"Enter dimensions: "<<endl;
    cout<<"M: ";
    cin>>m;
    cout<<"N: ";
    cin>>n;
    cout<<"Enter no of non-zero ele: ";
    cin>>num;
    Sparse S1(m,n,num);
    cin>>S1;
    cout<<"\nFirst Matrix: "<<endl<<S1;

    cout<<"\n2nd Matrix: "<<endl;
    cout<<"Enter dimensions: "<<endl;
    cout<<"M: ";
    cin>>m;
    cout<<"N: ";
    cin>>n;
    cout<<"Enter no of non-zero ele: ";
    cin>>num;
    Sparse S2(m,n,num);
    cin>>S2;
    cout<<"\nSecond Matrix: "<<endl<<S2;

    Sparse sum = S1 + S2;
    cout<<"\nSum Matrix: "<<endl<<sum;

    return 0;
}