#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData() { cout << "real: " << a << " imag: " << b << endl; }
    friend void sum(Complex, Complex);
};

void sum(Complex X, Complex Y) { cout << "Sum =  real: " << X.a + Y.a << " imag: " << X.b + Y.b; }

int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 6);
    c2.setData(4, 2);
    c1.showData();
    c2.showData();
    // c3 = sum(c1 + c2); // error here
    sum(c1, c2); // here sum is a freind function.

    return 0;
}