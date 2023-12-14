#include <iostream>
using namespace std;
class DynArray
{
private:
    int capacity;
    int lastIndex = -1;
    int *ptr;

public:
    DynArray(int);
    bool isEmpty();
    bool isFull();
    void doubleArray();
    void halfArray();
    void append(int);
    void insert(int, int);
    void edit(int, int);
    void delet(int);
    int get(int);
    int count();
    int findElement(int);
    int size()
    {
        return capacity;
    }
    ~DynArray();
};
DynArray::~DynArray()
{
    delete[] ptr;
}
int DynArray::findElement(int data)
{
    for (int i = 0; i <= lastIndex; i++)
        if (ptr[i] == data)
            return i;

    return -1;
}

int DynArray::count()
{
    return lastIndex + 1;
}

int DynArray::get(int index)
{
    if (index >= 0 && index <= lastIndex)
        return *(ptr + index);
    cout << endl
         << "Invalid index or empty array";
    return -1;
}

bool DynArray::isFull()
{
    return lastIndex == capacity - 1;
}
void DynArray::delet(int index)
{
    int i;
    if (isEmpty() || index < 0 || index > lastIndex)
        cout << "\nArray is empty or Invalid Index" << endl;
    else
    {
        for (int i = index; i < lastIndex; i++)
            ptr[i] = ptr[i + 1];
        lastIndex--;

        if (lastIndex + 1 >= capacity && capacity > 1)
            halfArray();
    }
}

void DynArray::edit(int index, int data)
{
    if (index >= 0 && index <= lastIndex)
        ptr[index] = data;
}
// insertion of data
void DynArray::insert(int index, int data)
{
    int i = lastIndex;
    if (index < 0 || index > lastIndex + 1)
        cout << "\nInvalid Index" << endl;
    else
    {
        if (isFull())
            doubleArray();

        for (i; i >= index; i--)
            ptr[i + 1] = ptr[i];

        ptr[index] = data;
        lastIndex++;
    }
}
// append in array
void DynArray::append(int data)
{
    lastIndex++;
    if (isFull())
        doubleArray();

    ptr[lastIndex] = data;
}

bool DynArray::isEmpty()
{
    return lastIndex == -1;
}
// methode to shrink an array.
void DynArray::halfArray()
{
    int *temp = new int[capacity / 2];
    for (int i = 0; i <= lastIndex; i++)
        temp[i] = ptr[i];

    delete[] ptr;

    ptr = temp;
    capacity /= 2;
}

// methode to grow an array.
void DynArray::doubleArray()
{
    int *temp = new int[capacity * 2];
    for (int i = 0; i < capacity; i++)
        temp[i] = ptr[i];

    delete[] ptr;
    ptr = temp;
    capacity = capacity * 2;
}

DynArray::DynArray(int capacity)
{
    this->capacity = capacity;
    lastIndex = -1;
    ptr = new int[capacity];
}

int main()
{

    return 0;
}