#include <iostream>
using namespace std;
int max(int *q, int size)
{
    int max = *(q + 0);
    for (int i = 1; i < size; ++i)
    {
        if (*(q + i) > max)
            max = *(q + i);
    }
    return max;
}
// Minimine value.
int min(int *q, int size)
{
    int min = *(q + 0);
    for (int i = 1; i < size; ++i)
    {
        if (*(q + i) < min)
            min = *(q + i);
    }
    return min;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *ptr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << (i + 1) << ": ";
        cin >> ptr[i];
    }

    cout << "max in array = " << max(ptr, n) << endl;
    cout << "Min in array = " << min(ptr, n) << endl;
    return 0;
}
// Sum of n numbers.

/*#include <iostream>
using namespace std;
void input(int *q, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "\nEnter value of element " << i << ":: ";
        cin >> q[i];
    }
}
int sum(int *q, int size)
{
    int s = 0, i;
    for (i = 0; i < size; i++)
    {
        s += *(q + i);
    }
    return s;
}
int main()
{
    int n;
    cout << "Enter no. of element:- ";
    cin >> n;
    int *ptr = new int[n];
    // Allocate memory for an integer and assign it the value of 5.
    if (ptr == nullptr)
    {
        cout << "Memory allocation failed";
        return 1;
    }

    input(ptr, n);
    cout << "Sum of " << n << " = " << sum(ptr, n) << endl;
    // cout << ptr << endl;
    delete[] ptr;
    // cout << ptr;
    return 0;
}*/