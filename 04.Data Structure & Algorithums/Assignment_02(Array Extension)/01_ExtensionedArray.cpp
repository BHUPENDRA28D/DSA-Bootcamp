#include <iostream>
using namespace std;
class ArrayProblems
{
private:
    int cap;
    int lastIndex;
    int *arr; // pointer to the array of integers
public:
    ArrayProblems(int);
    bool isEmpty();
    bool isFull();
    void addElement(int);
    void removeElemet(int);
    void sort();
    int smalletsElemet();
    int greatestElement();
    void search(int);
    int sumOfElement();
    int avgOfElement();
    void duplicateElemet();
    int secondLargest();
};
// SecondLargest
int ArrayProblems::secondLargest()
{
    int secondLargest = -1;

    if (isEmpty())
        return -1;

    else
    {
        for (int i = 0; i <= lastIndex; i++)
        {
            if (arr[i] < greatestElement() && arr[i] > secondLargest)
                secondLargest = arr[i];
        }
    }
}
// Average of Element
int ArrayProblems ::avgOfElement()
{
    float avg = 0;
    if (isEmpty())
        cout << "\nError : Empty Array" << endl;

    else
        avg = sumOfElement() / lastIndex;
}
// sum of Element
int ArrayProblems ::sumOfElement()
{
    int sum = 0;
    if (isEmpty())
        cout << "\nError: Empty Array\n";
    else
    {
        for (int i = 0; i <= lastIndex; i++)
            sum += arr[i];
    }
    return sum;
}
// search element
void ArrayProblems::search(int data)
{
    if (isEmpty())

        cout << "\nError:Empty Array\n"
             << endl;
    else
    {
        for (int i = 0; i <= lastIndex; i++)
            if (arr[i] == data)
                cout << "\nFound " << data << " at element : " << i << endl;
    }
}
// largest element of array
int ArrayProblems::greatestElement()
{
    int max = arr[0];
    if (isEmpty())
        return -1;
    else
    {

        for (int i = 1; i <= lastIndex; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
    }
    return max;
}
// smallest elemet
int ArrayProblems::smalletsElemet()
{
    int min = arr[0];
    if (isEmpty())
        return -1;
    else
    {

        for (int i = 1; i <= lastIndex; i++)
        {
            if (min > arr[i])
                min = arr[i];
        }
    }
    return min;
}
// isEmpty,isFull()
bool ArrayProblems ::isEmpty() { return lastIndex == -1; }
bool ArrayProblems ::isFull() { return (lastIndex > -1 && lastIndex == cap - 1); }

// sorting
void ArrayProblems::sort()
{
    if (lastIndex > -1 && lastIndex == cap - 1)
        cout << "Array is Full ";

    else
    {
        for (int i = 0; i <= lastIndex; i++)
        {

            for (int j = i + 1; i <= lastIndex; j++)
            {
                if (arr[i] > arr[j])
                    arr[i] = arr[j];
            }
        }
    }
}
// append
void ArrayProblems::addElement(int data)
{
    if (isFull())
        cout << "Array is Full" << endl;
    else
        arr[lastIndex++] = data;
}
void ArrayProblems::removeElemet(int data)
{
    if (isEmpty())
        cout << "Array is Full" << endl;
    else if (lastIndex < 0 || lastIndex >= cap + 1)
        cout << "Invalid Index";
    else
        arr[lastIndex++] = data;
}

// Consturcter
ArrayProblems::ArrayProblems(int size)
{
    cap = size;
    lastIndex = -1;
    arr = new int[cap];
}

int main()
{

    return 0;
}