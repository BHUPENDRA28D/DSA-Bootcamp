#include <iostream>
using namespace std;
class Volume
{
private:
    int a, volume;

public:
    Volume(int x)
    {
        a = x;
    }
    int get_volume()
    {
        return volume;
    }
    void calculate_volume()
    {
        volume = a * a * a;
    }
};

int main()
{
    Volume v1(3), v2(4);
    // v1.set_Value(2);
    v1.calculate_volume();
    cout << "Volume of the cube is :" << v1.get_volume() << endl;
    // v2.set_Value(5);
    v2.calculate_volume();
    cout << "Volume  = " << v2.get_volume();
    return 0;
}