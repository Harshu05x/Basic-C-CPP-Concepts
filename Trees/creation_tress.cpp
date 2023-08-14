#include <iostream>
#include "header_file.h"
using namespace std;

class tree{
    public:
    Node *root;
    tree(){root = NULL;}
    void createTree();
    void preorder(Node *p);
    void inorder(Node *p);
    void postorder(Node *p);
    void levelOrder(Node *p);
    void Height(Node *root);
};

void tree :: createTree(){
    Node *p,*t;
    int x;
    Queue q(100);
    cout<<"Enter root value: ";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = 0;
    q.enqueue(root);

    while(! q.isEmpty()){
        p = q.dequeue();
        cout<<"Enter Left Child of "<<p->data<<":";
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = 0;
            p->lchild = t;
            q.enqueue(t);
        }
        cout<<"Enter Right Child of "<<p->data<<":";
        cin>>x;
        if(x != -1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = 0;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void tree :: preorder(Node* p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void tree :: inorder(Node* p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
void tree :: postorder(Node* p){
    if(p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

                   
int main()
{
    tree T1;
    T1.createTree();
    T1.preorder(T1.root);
    return 0;
}