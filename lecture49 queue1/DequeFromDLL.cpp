#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque // user defined data sturcture
{
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            size++;
        }
    }

    void popFront()
    {
        if (size == 0)
        {
            cout << "LIST IS EMPTY!" << endl;
            return;
        }

        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void popBack()
    {
        if (size == 0)
        {
            cout << "LIST IS EMPTY!" << endl;
            return;
        }
        else if (size == 1)
        {
            popBack();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    int front()
    {
        if (size == 0)
        {
            cout << "Queue IS EMPTY!" << endl;
            return -1;
        }

        return head->val;
    }

    int back()
    {
        if (size == 0)
        {
            cout << "Queue IS EMPTY!" << endl;
            return -1;
        }

        return tail->val;
    }
};
int main()
{
    Deque dq;
    dq.pushFront(10);
    dq.pushBack(20);
    dq.pushFront(30);
    dq.display();
    dq.pushFront(40);
    dq.pushBack(25);
    dq.pushFront(31);
    dq.display();
    dq.popBack();
    dq.display();
       dq.popFront();
    dq.display();
}

