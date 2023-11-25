#include <iostream>
using namespace std;
class Square
{
private:
    int number, square;
    static int count;

public:
    void setNum(int n)
    {
        number = n;
    }
    int getNum() { return number; }
    int get_square() { return square; }
    void calculate_square()
    {
        square = number * number;
        count++;
    }
    int get_count();
};
int Square ::count = 0;
int Square::get_count()
{
    return count;
}

main()
{
    Square s1, s2;
    s1.setNum(4);
    s1.calculate_square();
    cout << "The square of " << s1.getNum() << " is :" << s1.get_square() << endl;
    cout << "The count of function call is = " << s1.get_count() << endl;
    s2.setNum(6);
    s2.calculate_square();
    cout << "\nThe square of " << s2.getNum() << " is :" << s2.get_square() << endl;
    cout << "The count of function call is = " << s2.get_count();
    return 0;
}