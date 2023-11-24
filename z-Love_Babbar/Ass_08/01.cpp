#include <iostream>
using namespace std;
class Array
{
private:
    int arr[10];

public:
    // Input element.
    void input_Array_Elements()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter element " << i << " : ";
            cin >> arr[i];
        }
    }

    // find max element.
    int find_Max_Element()
    {
        int max = arr[0];
        for (int j = 0; j < 10; j++)
        {
            if (arr[j] > max)
                max = arr[j];
        }
        return max;
    }
    // findmin element.
    int find_Min_Element()
    {
        int min = arr[0];
        for (int j = 0; j < 10; j++)
        {
            if (arr[j] < min)
                min = arr[j];
        }
        return min;
    }

    // sort array
    void sort()
    {

        int temp = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {

                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }

    // sum of element
    int sum()
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    // avg of element
    float avg()
    {
        int s = sum();
        return ((float)s / 10);
    }
    void editElement(int index, int newdata)
    {
        arr[index] = newdata;
        for (int i = 0; i < 10; i++)
        {
            cout << " " << arr[i];
        }
    }
    void dispaly()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << " " << arr[i];
        }
    }
};

int main()
{
    Array a1, a2;
    a1.input_Array_Elements();
    a1.dispaly();
    cout << "max element = " << a1.find_Max_Element() << endl;
    cout << "min element = " << a1.find_Min_Element() << endl;
    cout << "a1 array in sorted form--\n"
         << endl;
    a1.sort();
    cout << "a1 array element sum -\n"
         << a1.sum() << endl;
    cout << "a1 array element avarage -\n"
         << a1.avg() << endl;
    cout << "\nEdit elemt of a1 array " << endl;
    cout << "Enter index no. and value:- " << endl;
    a1.editElement(3, 76);
    a1.dispaly();

    return 0;
}