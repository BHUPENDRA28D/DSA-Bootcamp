#include "01_Array_ADT.cpp"
#include <iostream>

using namespace std;

class Stack : private Array
{
public:
    Stack(int);
    void push(int);
    int peek();
    void pop();
    void show();
    ~Stack();
    virtual bool isFull();
    virtual bool isEmpty();
};
void Stack ::show()
{
    cout << "\nThe element in stack are: \n";
    for (int i = count() - 1; i >= 0; i--)
    {
        cout << " " << get(i);
    }
}
bool Stack ::isFull()
{
    return Array::isFull();
}
bool Stack ::isEmpty()
{
    return Array::isEmpty();
}
// Distructor
Stack::~Stack()
{
}

int Stack ::peek()
{
    if (!isEmpty())
    {
        return get(count() - 1);
    }
    return 0;
}
// pop the top  element of stack
void Stack ::pop()
{
    if (isEmpty())
        cout << "\n Stack UnderFlow \n";
    else
        del(count() - 1);
}
// Push  element x onto the stack
void Stack::push(int data)
{
    if (isFull())
        cout << "\n Stack is full\n";
    else
        append(data);
}
Stack::Stack(int cap) : Array(cap) {}

int main()
{

    Stack s1(10); // create a stack with capacity = 10
    int choice = 0, data;
    while (choice != 7)
    {
        cout << "\nChoose the operation you want to perform:\n";
        cout << "1. Push an Element.\n";
        cout << "2. Pop an Element.\n";
        cout << "3. Peek the Top Element.\n";
        cout << "4. Show the Element.\n";
        cout << "5. Check if Empty.\n";
        cout << "6. Check if Full.\n";
        cout << "7. Exit.\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter data to Push: ";
            cin >> data;
            s1.push(data);
            break;
        case 2:
            cout << "\nPopped Element is: ";
            s1.pop();
            break;
        case 3:
            cout << "\nPeeked Element is: " << s1.peek() << "\n";
            break;
        case 4:
            s1.show();
            break;
        case 5:
            if (s1.isEmpty())
                cout << "\nStack is Empty.\n";
            else
                cout << "\nStack is not Empty.\n";
            break;
        case 6:
            if (s1.isFull())
                cout << "\nStack is Full.\n";
            else
                cout << "\nStack is not Full.\n";
            break;
        case 7:
            cout << "Exiting program.\n";
            exit(0);
        default:
            cout << "\nInvalid Input\n";
        }
    }
    // Push operation
    return 0;
}