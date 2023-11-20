#include <iostream>
using namespace std;
class Area
{
private:
    int len, bre;
    int area;

public:
    void set_length_breadth(int l, int b)
    {
        len = l;
        bre = b;
    }

    int get_area() { return area; }

    void calculateArea()
    {
        area = len * bre;
    }
};

int main()
{
    Area a1;
    a1.set_length_breadth(3, 4);
    a1.calculateArea();
    cout << "Area of rectangle is " << a1.get_area();

    return 0;
}