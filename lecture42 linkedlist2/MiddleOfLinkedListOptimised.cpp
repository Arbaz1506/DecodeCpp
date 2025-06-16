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
int middleElement(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast !=NULL && fast ->next!= NULL) // agar condition ulat palat krte to nahii chalta 
    // but why ? here come null pointer exception fast ka next hameha error rahega
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
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
    cout << "Middle Element is:" << middleElement(a);
}