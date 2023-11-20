#include <iostream>
using namespace std;
class Complex
{
private:
    int r, i;

public:
    Complex() { cout << "\nDefault constructor called" << endl; } // When we do not make a constructor compiler calls a defualt constructor.
    // Complex() { r = 0, i = 0; }                                 // NON Parameterized Consturtor.
    Complex(int x)
    {
        r = x, i = 0;
        cout << "\n 1 aug Con" << endl;
    } // 1 argument Consturcotr
    Complex(int x, int y)
    {
        r = x, i = y;
        cout << "Two aug Con" << endl;
    }

    // Parameterized Consturctor.

    Complex(Complex &L)
    {
        r = L.r;
        i = L.i;
        cout << "\nCopy consturctor" << endl;
    } // Copy Constructor...

    // Destructor
    ~Complex()
    {
        cout << "\n Destructor Called ";
        cout << "bye" << endl;
    }

    void setData(int a, int b) { r = a, i = b; }
    void showData() { cout << r << " + " << i << "i" << endl; }
    Complex add(Complex C)
    {
        Complex temp;
        temp.r = r + C.r;
        temp.i = i + C.i;
        return temp;
    }
};

int main()
{
    Complex c1(3, 4), c2(4, 5), c3(2), c4;
    Complex c5 = c1; // c5(c1);

    // c1.setData(2, 3);
    // c2.setData(3, 4);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    c5.showData();
    return 0;
}