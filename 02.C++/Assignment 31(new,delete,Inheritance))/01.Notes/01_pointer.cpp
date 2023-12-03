#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
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

    Complex C1;
    inputData(&C1);
    C1.showdata();

    return 0;
}