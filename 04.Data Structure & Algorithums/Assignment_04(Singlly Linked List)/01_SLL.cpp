#include <iostream>
#include <stdio.h>
// #include "01_Array_ADT.cpp";

using namespace std;
class Node
{
public:
    int item;
    Node *next;
    // Defualt Constructor
    Node() { item = 0, next = NULL; }

    Node(int item) { this->item = item, next = NULL; }
    // Node(int item) : item(this->item), next(nullptr) {}
};
class SLL
{

private:
    Node *start;

public:
    SLL() { start = NULL; }
    void showList();
    Node *search(int);
    void insertAfterNode(Node *, int);
    void insertAtStart(int);
    void insertAtLast(int);
    void deletFirst();
    void deletLast();
    void deleteNode(Node *);
    ~SLL();
};
// dustroctor
SLL::~SLL()
{
    deletFirst();
}
// delete node in between
void SLL::deleteNode(Node *ptr)
{
    Node *t;
    if (start == NULL)
        cout << '\n Underflow Condition';
    else
    {
        if (ptr)
            if (start == ptr)
            {
                start = ptr->next;
                delete ptr;
            }
            else
            {
                t = start;
                while (t->next != ptr)
                    t = t->next;

                t->next = ptr->next;
                delete ptr;
            }
    }
}
// delete at last..
void SLL ::deletLast()
{
    Node *t;
    if (start)
        cout << '\nUnderFlow' << endl;
    else if (start->next == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        t = start;
        while (t->next->next != NULL)
        {
            t = t->next;
        }
        delete t->next;
        t->next = NULL;
    }
}
// delete at start of list
void SLL ::deletFirst()
{
    Node *t;
    if (start)
    {
        t = start;
        start = start->next;
        delete t;
    }
    else
        cout << "The list is Empty" << endl;
}

// search  for a node with given key in the list starting from head
Node *SLL ::search(int data)
{

    Node *temp = start;
    while (temp->next != NULL)
    {
        if (temp->item == data)
            return temp;

        temp = temp->next;
    }
    return NULL;
}
// // insert after  a given node in the linked list
void SLL ::insertAfterNode(Node *ptr, int data)
{

    Node *n = new Node;
    n->item = data;
    n->next = ptr->next;
    ptr->next = n;
}
// display list.
void SLL ::showList()
{
    Node *temp = start;
    if (temp == NULL)
        cout << "\n List is Empty : " << endl;

    else
    {
        cout << endl;
        while (temp->next != NULL)
            cout << "  " << temp->item;
    }
}
// insertAtLast.
void SLL::insertAtLast(int data)
{
    Node *temp;
    Node *n = new Node;
    n->item = data;
    n->next = NULL;

    if (start == NULL)
        start = n;
    else
        while (temp->next != NULL)
            temp = temp->next;

    temp->next = n;
}

void SLL::insertAtStart(int data)
{
    Node *n = new Node;
    n->item = data;
    n->next = start;
    start = n;
}

// Main Function.
int main()
{
    Node *node1 = new Node(23);
    Node *node2;

    cout << "Created a node with value: " << node1->item << endl;
    cout << "Created node address values: " << node1->next << endl;

    SLL s1;

    s1.insertAtStart(20);
    s1.insertAtStart(25);
    s1.showList();

    return 0;
}