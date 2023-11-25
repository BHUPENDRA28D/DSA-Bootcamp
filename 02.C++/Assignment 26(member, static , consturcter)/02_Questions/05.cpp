#include <iostream>
using namespace std;
class Date
{
private:
    int d, m, year;

public:
    Date(int x, int y, int z)
    {
        d = x;
        m = y;
        year = z;
    }
    void display()
    {
        cout << "DATE :- " << d << "-" << m << "-" << year << endl;
    }
};

int main()
{
    Date d1(23, 4, 2034), d2(16, 11, 2023);
    // Date d = Date();
    d1.display();
    d2.display();

    return 0;
}