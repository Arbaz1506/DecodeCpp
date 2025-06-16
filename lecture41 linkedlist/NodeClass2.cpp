#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) // here we have used constructor
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming ll - linking nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout << a.val << " " << a.next->val << endl; // a.next->val this means a k next pe jaao aur (-> dereference operator lagao) aur value nikalo
    cout << ((a.next->next)->next)->val << endl; // a k next pe jao waha se uske next pe jao fir uske next se value nikalo
    // to display list using loop
    Node temp = a;
    while (1) // ye infinite time chalanne k liye while 1
    {
        cout << temp.val << " ";
        if (temp.next == NULL)
            break; // loop infinite haii isiliye break karne k liye
        temp = *(temp.next);
    }
}
