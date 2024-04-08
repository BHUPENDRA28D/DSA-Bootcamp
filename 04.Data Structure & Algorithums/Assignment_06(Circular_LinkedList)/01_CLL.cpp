#include <iostream>
using namespace std;
struct Node
{
    int item;
    Node *next;
};

class CLL
{
private:
    Node *last;

public:
    CLL() { last = NULL; } // Constructor to initialize the last node as NULL
    void insertStart(int);
    void insertLast(int);
    Node *search(int);
    void show();
    void insertAfter(Node *, int);
    void deleteStart();
    void deleteLast();
    void deleteAfterNode(Node *);
    ~CLL(); // Destructor to free up memory occupied by nodes
};
CLL::~CLL()
{
    while (last)
    {
        deleteStart();
    }
} // Function to destroy all dynamically
void CLL ::deleteAfterNode(Node *ptr)
{
    if (last)
    {
        Node *t;
        t = last->next;
        while (t->next != ptr)
            t = t->next;
        t->next = ptr->next;

        if (t == last) // If we are trying to delete the only node in the list
            last = NULL;

        else if (ptr == last)
            last = t;

        delete ptr;
    }
}
void CLL ::deleteLast()
{
    if (last)
    {
        Node *t;
        t = last;
        while (t->next != last)
            t = t->next;
        t->next = last->next;

        if (t == last)
        { // Only  one node in the list case{
            delete last;
            last = NULL;
        }

        else
        {
            delete last;
            last = t;
        }
    }
    else
        cout << "\n List is Empty  \n";
}
void CLL ::deleteStart()
{
    if (last)
    {
        Node *t;
        t = last->next;
        last->next = t->next;
        if (last->next == last)
        {
            last = NULL;
        }
        delete t;
    }
    else
        cout << endl
             << "The list is Empty\n";
}
// show list
void CLL::show()
{
    if (last == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *t = last->next;
    do
    {
        cout << "  " << t->item;
        t = t->next;
    } while (t != last->next);
    cout << endl;
}

// Insert in between the node.
void CLL ::insertAfter(Node *ptr, int data)
{
    Node *n = new Node;
    n->item = data;
    if (last)
    {
        n->next = ptr->next;
        ptr->next = n;
        if (last == ptr) // when only one node in list
            last = n;
    }
    else
        cout << "\n The specific address were to add the node not found : INVALID ADDRESS\n";
}
// Search item in array.
Node *CLL::search(int data)
{
    Node *temp;
    temp = last->next;

    while (temp != last)
    {
        if (temp->item == data)
            return temp;

        temp = temp->next;
    }
    return NULL;
}
//  Insert a new element at the last of Circular Linked list.
void CLL ::insertLast(int data)
{
    Node *n = new Node();
    n->item = data;
    if (last)
    {
        n->next = last->next;
        last->next = n;
        last = n;
    }
    else
        insertStart(data);
}
// Insert  a new element at the start of the linked list
void CLL ::insertStart(int data)
{
    Node *n = new Node;
    n->item = data;
    if (last)
    {
        n->next = last->next;
        last->next = n;
    }
    else
    {
        n->next = n; // Pointing back to itself for circularity
        last = n;
    }
}

int main()
{
    CLL c1;
    c1.insertStart(50);
    c1.insertStart(45);
    c1.insertStart(39);
    c1.insertStart(23);
    c1.show();
    c1.insertLast(67);
    c1.insertLast(98);
    c1.show();
    c1.insertAfter(c1.search(45), 108);
    c1.insertAfter(c1.search(67), 78);
    c1.show();
    c1.deleteStart();
    c1.deleteStart();
    cout << "\n List after deleting two node form start...\n";
    c1.show();
    c1.deleteLast();
    cout << "\n List after deleting one node form last...\n";
    c1.show();
    c1.deleteAfterNode(c1.search(108));
    cout << "\n List after deleting one node form b/t of list...\n";

    c1.show();

    return 0;
}