#include <iostream>
using namespace std;
class Complex
{
private:
    int r, i;

public:
    // void setData(int a, int b) { r = a, i = b; }
    void showData() { cout << r << " + " << i << endl; }

    friend Complex operator+(Complex, Complex);

    friend Complex operator-(Complex);
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex &);
};
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.r = X.r + Y.r;
    temp.i = X.i + Y.i;
    return temp;
}

Complex operator-(Complex X)
{
    Complex temp;
    temp.r = -X.r;
    temp.i = -X.i;
    return temp;
}

istream &operator>>(istream &din, Complex &X)
{
    din >> X.r >> X.i;
    return din;
}
ostream &operator<<(ostream &dout, Complex &X)
{
    dout << X.r << X.i;
    return dout;
}

int main()
{
    Complex c1, c2, c3;

    cout << "Enter a complex number:- ";
    cin >> c1;
    cout << "\nEnter a Complex number:-  ";
    cin >> c2;

    c1.showData();
    c2.showData();
    c3 = c1 + c2;
    c3.showData();
    c3 = -c1;
    c3.showData();
    return 0;
}