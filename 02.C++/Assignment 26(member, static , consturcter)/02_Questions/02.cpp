#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void set_time(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void show_time() { cout << " " << h << "::" << m << "::" << s << " " << endl; }
    void normalize()
    {
        m = m + m / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
        if (h > 24)
            h = h % 24;
    }
    // to add t1 and t2 time..
    Time add(Time t)
    {
        Time temp;
        temp.h = t.h + h;
        temp.m = t.m + m;
        temp.s = t.s + s;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.set_time(12, 65, 100);
    t1.normalize();
    t1.show_time();

    t2.set_time(1, 56, 67);
    t2.normalize();
    t2.show_time();

    t3 = t1.add(t2);
    t3.show_time();

    return 0;
}