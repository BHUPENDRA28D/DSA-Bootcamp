#include <iostream>
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img; // Instance Member Varibale a

public:
    // Instance Member funvtion
    void set_value()
    {
        cout << "\nEnter the value of Real and Imaginary part : \n";
        cout << "\nEnter Real value:-";
        cin >> real;
        cin.ignore();
        cout << "\nEnter Imaginary value:-";
        cin >> img;
    }
    // POJO -setter getter methode
    void setter(int r, int i)
    {
        real = r;
        img = i;
    }
    // Dispaly method
    void display(Complex c, Complex d)
    {
        cout << "Value of complex number is " << real << "+" << img << "i" << endl;
        cout << "Value of complex number is " << c.real << "+" << c.img << "i" << endl;
        cout << "Value of complex number is " << d.real << "+" << d.img << "i" << endl;
    }
    void add(Complex);
    Complex getter()
    {
        return *this;
    }
};
// defing instance member function outside the class because all function in class are by defualt inline.
void Complex::add(Complex c)
{
    cout << real + c.real << " + " << img + c.img << "i" << endl;
}

// MAIN Function.
int main()
{
    class Complex c1, c2, c3;
    // c1.set_value();
    c1.setter(5, 3);
    // c3.setter(2, 4);
    c2.setter(1, 8);
    // c1.display(c2, c3);
    c1.add(c2);

    return 0;
}