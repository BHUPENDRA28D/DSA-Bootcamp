

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    // This pointer is used to resolve name conflict btween instance member varible and local variable.
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << "real : " << a << " imag : " << b;
        cout << endl;
    }

    // This is also used whenever it is required to represent current object in instance member function..
    Complex sumGreater(Complex C)
    {
        return (a + b > C.a + C.b) ? *this : C;
    }
};

void inputData(Complex *p)
{
    int x, y;
    cout << "Enter the real and imaginary part of complex number:" << endl;
    cin >> x >> y;
    p->setdata(x, y);
}

int main()
{

    Complex C1, C2, C3;
    inputData(&C1);
    C2.setdata(10, 31);
    C3 = C1.sumGreater(C2);
    C3.showdata();

    return 0;
}