// Program to add two polynomials represented
// in linkedlist using recursion
#include <iostream>
using namespace std;

class Node
{
public:
    int coeff, power;
    Node *next;
    Node(int coeff, int power)
    {
        this->coeff = coeff;
        this->power = power;
        this->next = NULL;
    }
};

void addPolynomials(Node *head1, Node *head2)
{
    Node *temp1 , *temp2;
    temp1 = head1;
    temp2 = head2;
    while(temp1 && temp2){        
       if (temp1 == NULL && temp2 == NULL)
            break;
        else if (temp1->power == temp2->power)
        {
            cout << " " << temp1->coeff + temp2->coeff << "x^" << temp1->power << " + ";
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->power > temp2->power)
        {
            cout << " " << temp1->coeff << "x^" << temp1->power << " + ";
            temp1 = temp1->next;
        }
        else
        {
            cout << " " << temp2->coeff << "x^" << temp2->power << " + ";
            temp2 = temp2->next;
        }
    }
    while(temp1){
        cout << " " << temp1->coeff << "x^" << temp1->power << " + ";
        temp1 = temp1->next;
    }
    while(temp2){
        cout << " " << temp2->coeff << "x^" << temp2->power << " + ";
        temp2 = temp2->next;
    }
}

void insert(Node *head, int coeff, int power)
{
    Node *new_node = new Node(coeff, power);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void printList(Node *head)
{
    cout << "Linked List" << endl;
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << " " << temp->coeff << "x"
             << "^" << temp->power << " + ";
        temp = temp->next;
    }
    cout << " " << temp->coeff << "x"
        << "^" << temp->power;

}

int main()
{

    Node *head1 = new Node(5, 5);
    insert(head1, 4, 4);
    insert(head1, 4, 3);
    insert(head1, 4, 2);
    insert(head1, 4, 1);
    Node *head2 = new Node(6, 4);
    insert(head2, 4, 3);
    insert(head2, 4, 2);
    insert(head2, 4, 1);
    printList(head1);
    cout << endl;
    printList(head2);
    cout << endl
         << "Addition:" << endl;
    addPolynomials(head1, head2);

    return 0;
}

// This code is contributed by Akshita Patel
