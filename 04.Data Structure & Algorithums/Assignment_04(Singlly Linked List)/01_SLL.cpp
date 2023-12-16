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
    SLL() : start(NULL) {}
    void insertAtStart(int);
    void insertAtLast(int);
};
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
    Node *n1 = new Node;
    n1->item = data;
    n1->next = start;
    start = n1;
}

// Main Function.
int main()
{
    Node *node1 = new Node(23);
    Node *node2;

    cout << "Created a node with value: " << node1->item << endl;
    cout << "Created node address values: " << node1->next << endl;

    return 0;
}