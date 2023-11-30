#include <iostream>
using namespace std;
class Attendence
{
private:
    int roolno, present_days, absent_days;

public:
    // Constructor
    Attendence() {}
    Attendence(int roolno, int present_days, int absent_days)
    {
        this->roolno = roolno;
        this->present_days = present_days;
        this->absent_days = absent_days;
    }

    int getRool() { return roolno; }
    int getPresent() { return present_days; }
    int getAbsent() { return absent_days; }

    // increment operator.
    Attendence operator++()
    {
        Attendence temp;
        temp.roolno = ++roolno;
        temp.present_days = ++present_days;
        temp.absent_days = ++absent_days;
        return temp;
    }
    Attendence operator--()
    {
        Attendence temp;
        temp.roolno = roolno;
        temp.present_days = --present_days;
        temp.absent_days = --absent_days;
        return temp;
    }
};
int main()
{
    Attendence at1(2, 12, 34), at2(2, 45, 1);

    cout << "Before Increament" << endl;
    cout << "**********\nUtkarsh rool no . " << at1.getRool() << "\nUtkarsh present days = " << at1.getPresent() << "\nUtkarsh absent days = " << at1.getAbsent() << "\n**************" << endl;
    ++at1;
    cout << "After Increment" << endl;
    cout << "**********\nUtkarsh rool no . " << at1.getRool() << "\nUtkarsh present days = " << at1.getPresent() << "\nUtkarsh absent days = " << at1.getAbsent() << "\n**************" << endl;

    cout << endl
         << endl
         << "\n########################";

    cout << "Before Decrement" << endl;
    cout << "**********\nUtkarsh rool no . " << at2.getRool() << "\nUtkarsh present days = " << at2.getPresent() << "\nUtkarsh absent days = " << at2.getAbsent() << "\n**************" << endl;
    --at2;

    cout << "After Decrement" << endl;
    cout << "**********\nUtkarsh rool no . " << at2.getRool() << "\nUtkarsh present days = " << at2.getPresent() << "\nUtkarsh absent days = " << at2.getAbsent() << "\n**************" << endl;
    return 0;
}