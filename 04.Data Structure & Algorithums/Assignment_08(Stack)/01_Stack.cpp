#include <iostream>
// #include "01_Array_ADT.cpp"
using namespace std;
#define n 10

class Stack
{
private:
    int *arr;
    int top;

public:
    // Constructor to create a stack of given
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int data)
    {
        if (top == n - 1)
        {
            cout << "\n Stack OverFlow : Stack is Full" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if (top == -1 || top >= n)
        {
            cout << "\n Stack UnderFlow : Empty nothind to pop\n or Invalid top.." << endl;
            return;
        }
        int x = arr[top];
        top--;
        cout << endl
             << x << "  is popped from the Stack" << endl;
    }
    void peek()
    {
        if (top > -1 && top < n)
            cout << "\n The element at the top of the stack is: "
                 << arr[top] << endl;
    }
    void show()
    {
        if (top > -1)
        {
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";

            cout << endl;
        }
    }
};

//  Main Methode...
int main()
{
    Stack s1;
    s1.push(5); // Push operation

    s1.push(10);
    s1.push(13);
    s1.push(15);
    s1.push(16);
    s1.push(97);
    s1.show();
    s1.peek();
    s1.pop();
    s1.pop();
    s1.show();

    return 0;
}