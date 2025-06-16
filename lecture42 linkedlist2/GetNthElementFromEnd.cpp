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
int nthElement(int n, Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    cout<<"size is:"<<size<<endl;
    int m = size - n + 1;
    int idx = m - 1;
    temp=head;
    for (int i = 1; i <=idx; i++)
    {
        temp = temp->next;
    }
    return temp->val;
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    Node *g = new Node(70);
    Node *h = new Node(80);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    cout << "Nth Element is:" << nthElement(4,a);
}