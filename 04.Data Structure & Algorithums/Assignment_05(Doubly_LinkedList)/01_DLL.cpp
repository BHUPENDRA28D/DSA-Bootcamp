#include <iostream>
using namespace std;
// Node class.
class Node
{
public:
    int item;
    Node *prev;
    Node *next;
    // Perimeterized consturctor.
};

//  Linked List Class
class DLL
{
private:
    Node *start;

public:
    DLL() { start = NULL; }
    Node *search(int);
    void insertAfterNode(int, Node *);
    void insertAtLast(int);
    void insertAtStart(int);
    void showList();
};
// insert  a node after the given node ptr.
void DLL ::insertAfterNode(int data, Node *ptr)
{
    if (ptr == nullptr)
    {
        cout << " The Node not found" << endl;
        return;
    }
    else
    {
        Node *n = new Node;
        n->item = data;
        n->prev = ptr;
        n->next = ptr->next;

        ptr->next->prev = n;
        ptr->next = n;
    }
}
// searching  a data ia node in the list.
Node *DLL::search(int data)
{
    Node *t;
    t = start;
    while (t->next != NULL)
    {
        if (t->item == data)
            return t;
        t = t->next;
    }
    return nullptr;
}

//  Insert a new node at the end of the list
void DLL::insertAtLast(int data)
{
    Node *n = new Node; // Allocate memory for the new node
    n->item = data;     // Set the data of the new node
    n->next = NULL;     // Set the next pointer of the new node to NULL

    if (start == NULL) // If the list is empty
    {
        insertAtStart(data); // Insert the node at the start
    }
    else
    {

        Node *t = start;        // Start traversing the list from the start
        while (t->next != NULL) // Traverse to the last node
        {
            t = t->next;
        }

        // Link the new node to the last node
        t->next = n;
        n->prev = t;
    }
}

// display the list
void DLL::showList()
{
    Node *t;
    if (start == NULL)
        cout << "The list is empty." << endl;
    else
    {
        t = start;
        while (t != NULL)
        {
            cout << " " << t->item;
            t = t->next;
        }
    }
}
// add  a new node at the beginning of the list.
void DLL::insertAtStart(int data)
{
    Node *n = new Node;
    n->item = data;

    if (start == NULL)
    {
        start = n;
        return;
    }

    n->prev = NULL;
    n->next = start;

    start->prev = n;
    start = n;
}

// Main  function to test the code.
int main()
{
    DLL d1;
    // d1.insertAtStart(23);
    // d1.insertAtStart(30);
    // d1.insertAtStart(37);
    d1.insertAtStart(12);
    // d1.insertAtLast(56);
    // d1.insertAtLast(65);
    // d1.insertAtLast(37);
    // d1.insertAfterNode(34, d1.search(56));
    d1.insertAfterNode(23, d1.search(12));
    d1.showList();

    return 0;
}