#include <iostream>
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
    SLL()
    {
        start = NULL;
    }

    void insertAtHead(Node &, int);
};

void SLL::insertAtHead(Node &start, int data)
{
    Node *temp = new Node(data);
    temp->item = data;
    // temp->next = start;
}
// Main Function.
int main()
{
    Node *node1 = new Node(23);
    cout << "Created a node with value: " << node1->item << endl;
    cout << "Created node address values: " << node1->next << endl;

    return 0;
}