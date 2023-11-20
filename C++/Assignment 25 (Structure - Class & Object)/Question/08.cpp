#include <iostream>
using namespace std;
class Area
{
private:
    int radius;
    float area;

public:
    void set_radius(int r) { radius = r; }
    int get_radius() { return radius; }

    float get_area() { return area; }

    void calculateArea()
    {
        area = 3.14 * (radius * radius);
    }
};

int main()
{
    Area a1;
    a1.set_radius(3);
    a1.calculateArea();
    cout << "Area of radius " << a1.get_radius() << " is " << a1.get_area();

    return 0;
}