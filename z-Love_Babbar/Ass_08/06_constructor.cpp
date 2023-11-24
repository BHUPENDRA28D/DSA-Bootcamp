#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height;

public:
    // Non perameterized Constructor.
    Box() { this->length = 0, this->breadth = 0, this->height = 0; }
    // Parameterized Constructor.
    Box(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
    //// Constructor with one argument for all three dimensions
    Box(int x)
    {
        this->length = x;
        this->breadth = x;
        this->height = x;
    }

    void setDimensions(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void showDimensions()
    {
        cout << "l = " << length << endl;
        cout << "b = " << breadth << endl;
        cout << "h = " << height << endl;
        cout << "______________________<<" << endl;
    }
};
int main()
{
    Box box1(10, 2, 2);
    // box1.setDimensions(2, 1, 3);
    box1.showDimensions();
    Box box2(10);

    box2.showDimensions();

    return 0;
}