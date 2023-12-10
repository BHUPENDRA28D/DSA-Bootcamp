#include <iostream>
using namespace std;
class DynArray
{
private:
    int capacity;
    int lastindex = -1;
    int *ptr;

public:
    DynArray(int);
    void doubleArray();
    void halfArray();
};
void DynArray::halfArray()
{
    int *temp = new int[capacity / 2];
}
void DynArray::doubleArray()
{
    int *temp = new int[capacity * 2];
    for (int i = 0; i < capacity; i++)
        ptr[i] = temp[i];

    delete[] ptr;
    ptr = temp;
    capacity = capacity * 2;
}

DynArray::DynArray(int capacity)
{
    this->capacity = capacity;
    lastindex = -1;
    ptr = new int[capacity];
}

int main()
{

    return 0;
}