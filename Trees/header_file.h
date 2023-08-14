#include<stdio.h>
using namespace std;
#ifndef header_file_h
#define header_file_h

class Node{
    public: 
    Node *lchild;
    Node *rchild;
    int data;
};

class Queue{
    int size,front,rear;
    Node **Q;

    public:
    Queue(){
        cout<<"Enter size: ";
        cin>>this->size;
        this->front = this->rear = -1;
        Q = new Node*[this->size];
    }
    Queue(int size){
        this->front = this->rear = -1;
        Q = new Node*[size];
    }
    void enqueue(Node* ele);
    Node* dequeue();
    int isEmpty(){ return front == rear; };
    int isFull(){ (this->rear == this->size -1 ) ? 1 : 0 ; };
    int first();
    int last();
    friend void display(Queue *q);
};

void Queue :: enqueue(Node * ele){
    if(this->rear == this->size-1) cout<<"Queue is Full"<<endl;
    else {
        this->rear ++;
        this->Q[this->rear] = ele;
    }
}

Node* Queue :: dequeue(){
    Node* x = NULL;
    if(this->front == this->rear) cout<<"Queue is empty"<<endl;
    else {
        this->front ++;
        x = this->Q[this->front];
    }
    return x;
}

void display(Queue *q){
    if(q->front == q->rear) cout<<"Queue is empty"<<endl;
    for(int i = q->front+1;i <= q->rear;i++){
        cout<<q->Q[i]<<" ";

    }
}


#endif header_file_h
