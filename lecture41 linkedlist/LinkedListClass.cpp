#include <iostream>
using namespace std;
class Node // user defined data type
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
class LinkedList // user defined data sturcture
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
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
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            Node *temp = new Node(val);
            temp->next = head;
            head = temp;
            size++;
        }
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx == 0)
        {
            insertAtHead(val);
            return;
        }
        else if (idx == size)
        {
            insertAtTail(val);
            return;
        }

        else if (idx < 0 || idx > size)
        {
            cout << "INVALID!" << endl;
            return;
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx - 1; i++)
            {
                temp = temp->next;
            }

            
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int GetAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "INVALID!";
            return -1;
        }
        else if (idx == size - 1)
            return tail->val;
        else if (idx == 0)
            return head->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }

   

    void DeleteAtHead()
    {
        if (size == 0)
        {
            cout << "LIST IS EMPTY!" << endl;
            return;
        }

        head = head->next;
        size--;
    }
    void DeleteAtTail()
    {
        if (size == 0)
        {
            cout << "LIST IS EMPTY!" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "INVAID!";
            return;
        }
        else if (idx == 0)
            DeleteAtHead();
        else if (idx == size - 1)
            DeleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main()
{
    LinkedList ll;
    ll.insertAtTail(69);
    ll.display();
    ll.insertAtTail(80);
    ll.display();
    ll.insertAtHead(86);
    ll.display();
    ll.insertAtHead(98);
    ll.display();
    ll.insertAtTail(18);
    ll.display();
    ll.insertAtIdx(2, 64);
    ll.display();
    ll.insertAtHead(76);
    ll.display();
    ll.insertAtIdx(9, 99);
    ll.display();
    ll.DeleteAtHead();
    ll.display();
    ll.DeleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
    cout << ll.GetAtIdx(2) << endl;
    cout << ll.size;
}