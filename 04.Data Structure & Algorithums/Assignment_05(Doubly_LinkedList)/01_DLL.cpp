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
    void deleteAfterNode(Node *);
    void deleteLast();
    void deleteFirst();
    void insertAfterNode(int, Node *);
    void insertAtLast(int);
    void insertAtStart(int);
    void showList();
    ~DLL();
};
// Destructor to free the memory occupied
DLL::~DLL()
{
    while (start)
        deleteFirst();
}

// delete  a node after the given node.
void DLL::deleteAfterNode(Node *ptr)
{ // we have to check three condition where the node is empty , first node or last node.
    // if (start == NULL)
    //     cout << "The list is empty." << endl;
    // else if (start == ptr)
    // {
    //     deleteFirst();
    // }
    // else
    // {
    //     Node *t;
    //     t = start;
    //     while (t->next != ptr)
    //         t = t->next;

    //     t->next = ptr->next;
    //     ptr->next->prev = ptr->prev;
    //     delete ptr;
    // }
    if (ptr->prev) // when our node is not first  in the list
        ptr->prev->next = ptr->next;

    else
        start = ptr->next; // when our node is first node  in the list

    if (ptr->next) // when our node is not last in list
    {
        ptr->next->prev = ptr->prev;
    }
    delete ptr;
}
// delete  last node from the list.
void DLL ::deleteLast()
{

    if (start == NULL)
        cout << "The list is empty." << endl;
    else if (start->next == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        Node *t;
        t = start;
        while (t->next->next != NULL)
        {
            t = t->next;
        }
        delete t->next;
        t->next = NULL;
    }
}
// delete  first node in the list.
void DLL ::deleteFirst()
{
    if (start)
    {
        Node *t;
        t = start;
        start = t->next;
        if (start->next == NULL)
            start->prev = NULL;
        // t->next->prev = start->next;

        delete t;
    }
    else

        cout << "List is Empty";
}
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
        if (ptr->next != NULL)
            ptr->next->prev = n;
        ptr->next = n;
    }
}
// searching  a data ia node in the list.
Node *DLL::search(int data)
{
    Node *t;
    t = start;
    while (t != NULL)
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
        cout << "\n";
    }
}
// add  a new node at the beginning of the list.
void DLL::insertAtStart(int data)
{
    Node *n = new Node;
    n->item = data;
    n->prev = NULL;
    n->next = start;

    if (start)
        start->prev = n;

    start = n;
}

// Main  function to test the code.
int main()
{
    DLL d1;
    d1.insertAtStart(5);
    d1.insertAtStart(23);
    d1.insertAtStart(25);
    d1.showList();
    d1.insertAtLast(45);
    d1.insertAtLast(49);
    d1.showList();
    d1.insertAfterNode(67, d1.search(25));
    d1.insertAfterNode(97, d1.search(45));
    d1.showList();
    d1.deleteFirst();
    d1.showList();
    d1.deleteLast();
    d1.showList();
    d1.deleteAfterNode(d1.search(23));
    d1.showList();
    return 0;
}