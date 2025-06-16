#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
};
int main()
{
    Node a;
    a.val = 10;// harr baar initialize krna pad rha we can even use constructor so use of constructor in NodeClass2
    Node b;
    b.val = 20;
    Node c;
    c.val = 30;
    Node d;
    d.val = 40;
    // forming ll - linking nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
}