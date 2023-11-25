#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex() {}
    // Copy Constructer
    Complex(Complex &C)
    {
        a = C.a;
        b = C.b;
    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData() { cout << "real: " << a << " imag: " << b << endl; }
    friend void sum(Complex, Complex);
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex);
};

void sum(Complex X, Complex Y) { cout << "Sum =  real: " << X.a + Y.a << " imag: " << X.b + Y.b; }
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}

// Main Function.
int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 6);
    c2.setData(4, 2);
    c1.showData();
    c2.showData();
    // c3 = sum(c1 + c2); // error here
    // sum(c1, c2); // here sum is a freind function.

    // friend operator -
    Complex c4;
    c4 = c1 + c2; // operator+(c1,c2);
    c4.showData();
    Complex c5;
    c5 = c4;
    c5.showData();
    c5 = -c1; // Here it is operator-(c1); in operator overloading  it is c1.operator-();
    c5.showData();

    return 0;
}
