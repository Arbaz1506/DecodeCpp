#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Node
{
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
    c->left = f;
    c->right = g;

    vector<int> ans;
    stack<Node *> st;
   if(a!=NULL) st.push(a);

    while (!st.empty())
    {
        Node *temp = st.top();
        st.pop();
        ans.push_back(temp->val);

        if (temp->right != nullptr)
        {
            st.push(temp->right);
        }
        if (temp->left != nullptr)
        {
            st.push(temp->left);
        }
    }

    cout << "Preorder traversal: ";
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
