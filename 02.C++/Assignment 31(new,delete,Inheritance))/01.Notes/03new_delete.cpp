#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex() {}
    Complex(int a, int b) { this->a = a, this->b = b; }
    void setData(int a, int b) { this->a = a, this->b = b; }
    void showData()
    {
        cout << "real : " << a << " imaginary : " << b << endl;
    }
};
void inputData(Complex *C)
{
    int x, y;
    cout << "Enter value of x and y";
    cin >> x >> y;
    C->setData(x, y);
}

int main()
{
    Complex *ptr1 = new Complex(2, 3);
    Complex *ptr2 = new Complex;
    Complex *ptr3 = new Complex;
    ptr2->setData(3, 5);
    inputData(ptr3);

    ptr1->showData();
    (*ptr2).showData(); /// both . and -> operator can be used.
    (*ptr3).showData();

    //  Array of objects
    // Complex *q = new Complex[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter value for element " << i << endl;
    //     inputData(q);
    // }

    return 0;
}