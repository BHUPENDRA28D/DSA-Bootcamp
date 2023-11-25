#include <iostream>
using namespace std;
class Largest
{
private:
    int a, b, c, largest;

public:
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int getLargest() { return largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); }
};
int main()
{
    Largest l1;
    l1.setData(12, 45, 7);
    cout << "largest = " << l1.getLargest();

    return 0;
}