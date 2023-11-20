#include <iostream>
using namespace std;
class BOX
{
private:
    int l, b, h;

public:
    BOX(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void displayVolume() { cout << "Volume of the box is " << l * b * h << " cm " << endl; }
};
int main()
{
    BOX b1(2, 6, 8), b2(4, 2, 10);
    b1.displayVolume();
    b2.displayVolume();

    return 0;
}