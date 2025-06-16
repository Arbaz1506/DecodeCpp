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
class DoublyLinkedList // user defined data sturcture
{
public:
    Node *head;
    Node *tail;
    int size;
    DoublyLinkedList()
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
            temp->next = head;
            head->prev = temp;
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
            t->prev = temp;    // extra
            t->next->prev = t; // extra
            size++;
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
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }
    void DeleteAtTail()
    {
        if (size == 0)
        {
            cout << "LIST IS EMPTY!" << endl;
            return;
        }
        else if (size == 1)
        {
            DeleteAtHead();
            return;
        }
        Node *temp = tail->prev;
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
            temp->next->prev = temp;
            size--;
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
};
int main()
{
    DoublyLinkedList dll;
    dll.insertAtTail(69);
    dll.display();
    dll.insertAtTail(80);
    dll.display();
    dll.insertAtTail(69);
    dll.display();
    dll.insertAtTail(80);
    dll.display();
    dll.insertAtHead(86);
    dll.display();
    dll.insertAtHead(98);
    dll.display();
    dll.insertAtTail(18);
    dll.display();
    dll.insertAtIdx(2, 64);
    dll.display();
    dll.insertAtHead(76);
    dll.display();
    dll.insertAtIdx(9, 99);
    dll.display();
    dll.DeleteAtHead();
    dll.display();
    dll.DeleteAtTail();
    dll.display();
    dll.deleteAtIdx(3);
    dll.display();
    cout << dll.GetAtIdx(2) << endl;
    cout << dll.size;
}
