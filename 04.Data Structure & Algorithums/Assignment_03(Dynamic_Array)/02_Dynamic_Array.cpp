#include <iostream>
using namespace std;
class DynArray
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    DynArray(int);  // constructor to initialize the dynamic array with given capacity.
    bool isEmpty(); // function to check if the array is empty or not.
    bool isFull();  // function to check if the array is Full or not.
    void doubleArray();
    void halfArray();
    void append(int); // Function to add an element at the end of the array.
    void insert(int, int);
    void edit(int, int);
    void delet(int);
    void get(int);
    void count();
    int found(int data);
    int size();
    void display();
    ~DynArray();
};
// Size of Array
int DynArray::size()
{
    return capacity;
}
// display
void DynArray::display()
{
    cout << endl;
    for (int i = 0; i < lastIndex + 1; i++)
        cout << " " << *(ptr + i) << "\t";
}
// Distrunctor
DynArray::~DynArray() { delete[] ptr; }
// if found element  is present then return its index otherwise -1
int DynArray::found(int data)
{
    for (int i = 0; i <= lastIndex; i++)
    {
        if (ptr[i] == data)
            return i;
    }

    return -1;
}
// count

void DynArray::count()
{
    int count = 0;
    for (int i = 0; i <= lastIndex; i++)
        count = count + 1;
    cout << "Number of elements in the array are : " << count;
}
// get element at specific index
void DynArray::get(int index)
{
    if (index >= 0 && index <= lastIndex)
        cout << "Element at Index " << index << " : " << ptr[index] << endl;
    else
        cout << "Invalid Index!" << endl;
}
// delete  a specific index value from the array
void DynArray::delet(int index)
{

    if (isEmpty())
        cout << "Array is Empty";
    else
    {
        for (int i = index; i < lastIndex; i++)
            ptr[i] = ptr[i + 1];

        lastIndex--;

        if (lastIndex + 1 <= capacity / 2 && capacity > 1)
            halfArray();
    }
}
// edit the element
void DynArray::edit(int index, int value)
{
    if (index >= 0 && index <= lastIndex)
    {
        ptr[index] = value;
    }
}
// insert function
void DynArray ::insert(int index, int data)
{
    int i = lastIndex;
    if (index < 0 || index > lastIndex + 1)
        cout << "Invalid Index" << endl;
    else
    {
        if (isFull())
            doubleArray();
        else
        {
            for (i = lastIndex; i > index - 1; i--)
            {
                ptr[i + 1] = ptr[i];
            }
            ptr[index] = data;
            lastIndex++;
        }
    }
}
void DynArray ::append(int data)
{
    if (lastIndex == capacity - 1)
    {
        doubleArray();
    }
    else
    {
        lastIndex++;
        ptr[lastIndex] = data;
    }
}
// halfArray
void DynArray::halfArray()
{
    int *temp = new int[capacity];
    for (int i = 0; i <= lastIndex; i++)
        temp[i] = ptr[i];

    delete[] ptr;
    ptr = temp;
    capacity /= 2;
}
// doubleArray
void DynArray::doubleArray()
{
    int *temp = new int[capacity * 2];
    for (int i = 0; i <= lastIndex; i++)
        temp[i] = ptr[i];

    delete[] ptr; // free up memory occupied by old array

    ptr = temp;

    capacity *= 2;
}
// isFull isEmpty
bool DynArray::isEmpty() { return (lastIndex == -1); }

// Constructor
bool DynArray::isFull() { return (lastIndex == capacity - 1); }

// Constructor
DynArray ::DynArray(int cap)
{
    capacity = cap;
    lastIndex = -1;
    ptr = new int[capacity];
}

int main()
{
    int choice, data, index, n;
    DynArray obj(5);
    while (true)
    {
        cout << "\n\n*** Dynamic Array Menu ***" << endl;
        cout << "1. Append" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Edit" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Get" << endl;
        cout << "6. Count" << endl;
        cout << "7. Find" << endl;
        cout << "8. Display" << endl;
        cout << "9. Capacity" << endl;
        cout << "11. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to append: ";
            cin >> data;
            obj.append(data);
            break;

        case 2:
            cout << "Enter index and data to insert: ";
            cin >> index >> data;
            obj.insert(index, data);
            break;

        case 3:
            cout << "Enter index and new value: ";
            cin >> index >> data;
            obj.edit(index, data);
            break;

        case 4:
            cout << "Enter index to delete: ";
            cin >> index;
            obj.delet(index);
            break;

        case 5:
            cout << "Enter index to get element: ";
            cin >> index;
            obj.get(index);
            break;

        case 6:
            obj.count();
            break;

        case 7:
            cout << "Enter data to find: ";
            cin >> data;
            index = obj.found(data);
            if (index != -1)
                cout << "Element found at index: " << index << endl;
            else
                cout << "Element not found" << endl;
            break;

        case 8:
            obj.display();
            break;
        case 9:
            n = obj.size();
            cout << " The Capcity of array is " << n;
            break;

        case 11:
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 9." << endl;
            break;
        }
    }

    return 0;
}