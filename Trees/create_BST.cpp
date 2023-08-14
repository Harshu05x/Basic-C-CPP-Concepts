#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = this->right = nullptr;
        }
};

Node* buildTree(Node* root){
    cout<<"\nEnter data: ";
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1) 
        return nullptr;
    
    cout<<"\nEnter data for left of "<<data<<" :";
    root->left = buildTree(root->left);
    cout<<"\nEnter data for right of "<<data<<" :";
    root->right = buildTree(root->right);
}

void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}
                   
int main()
{
    Node* root = nullptr;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"\nTree: "<<endl;
    levelOrder(root);
    return 0;
}