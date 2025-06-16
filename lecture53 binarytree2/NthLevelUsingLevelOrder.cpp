#include <iostream>
using namespace std;

class Node
{ // this is tree TreeNode
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node *root, int n, int tar)
{
    if (root == NULL)
        return;
    if (n == tar)
    {
        cout << root->val << " ";
    }
    display(root->left, n + 1, tar);
    display(root->right, n + 1, tar);
}

int level(Node *root)
{
    if (root == NULL)
        return 0;
    int lMax = level(root->left);
    int rMax = level(root->right);
    return 1 + max(lMax, rMax);
}

void levelOrder(Node *root)
{
    int n = level(root);
    for (int i = 0; i < n; i++)
    {
        display(root, 1, i);
        cout<<endl;
    }
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    c->left = f;
    levelOrder(a);
}