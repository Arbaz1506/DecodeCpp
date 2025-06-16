#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        
        n++;
        temp = temp->next;
    }
    cout<<"THE SIZE OF THE LINKEDLIST IS: ";
    return n;
}
int main()
{

    Node *a = new Node(10); // pointer typ hi object bana liye new means dynamic allocation
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    cout << size(a);
}
