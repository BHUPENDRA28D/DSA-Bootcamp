#include <iostream>
using namespace ::std;

class ReverseNumber
{
private:
    int number;
    int reverse;

public:
    void setNum(int n)
    {
        number = n;
    }
    int getActual_Num()
    {
        return number;
    }
    int getRev()
    {
        return reverse;
    }

    void calculate_rev()
    {
        int reminder;

        reverse = 0;
        while (number != 0)
        {
            reminder = number % 10;
            number = number / 10;
            reverse = (reverse * 10) + reminder;
        }
    }
};

int main()
{
    ReverseNumber r1, r2;
    r1.setNum(3241);
    r1.calculate_rev();
    cout << "Reverse of " << r1.getActual_Num() << "  = " << r1.getRev();

    return 0;
}