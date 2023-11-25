#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void setData(int x, int y)
    {
        real = x;
        imag = y;
    }
    void showData()
    {
        cout << "(" << real << "," << imag << "i )";
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.real = real + C.real;
        temp.imag = imag + C.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 5);
    c1.showData();
    c2.setData(4, -7);
    c2.showData();
    cout << "Sum is : ";
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}