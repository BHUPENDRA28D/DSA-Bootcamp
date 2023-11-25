#include <iostream>
using namespace std;
class Complex
{
private:
    int r, i;

public:
    void setData(int a, int b) { r = a, i = b; }
    void showData() { cout << r << " + " << i << "i" << endl; }
    // Complex add(Complex C)
    // { Complex temp;
    //     temp.r = r + C.r;
    //     temp.i = i + C.i;
    //     return temp;}

    // operator overload and making function as operator...
    // operator keyword (operator+(){})  is used to make operator functions.
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.r = C.r + r;
        temp.i = +C.i + i;
        return temp;
    }
    // Unary operator - it have a return type but not arrgument is passed in it.
    Complex operator-()
    {
        Complex temp;
        temp.r = -r;
        temp.i = -i;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    // Complex c5 = c1; // c5(c1);

    c1.setData(2, 3);
    c2.setData(3, 4);
    c1.showData();
    c2.showData();
    // c3 = c1.add(c2); This is giving value of to c3 object of add method were c1 is caller object and it is calling add methode were we are passing c2 object it will give addition of c1 and c2;
    // operator overloading and call by operator.

    c3 = c1 + c2;
    c3.showData();
    c3 = -c1; // Unary Operator
    c3.showData();
    c3 = (-c1) + c2;
    c3.showData();
    // c5.showData();
    return 0;
}