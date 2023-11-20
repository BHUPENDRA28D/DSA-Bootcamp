#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    void set_time(int, int, int);

    void show_data()
    {
        cout << hr << " hr :" << min << " min :" << sec << " sec" << endl;
    }
};
void Time ::set_time(int h, int m, int s)
{
    if (h >= 0 && h <= 23)
    {
        hr = h;
    }
    else
    {
        cout << "Invalid hour\n";
    }
    if (m >= 0 && m <= 59)
    {
        min = m;
    }
    else
    {
        cout << "Invalid minute\n";
    }
    if (s >= 0 && s < 59)
    {
        sec = s;
    }
    else
    {
        cout << "Invalid second\n";
    }
}

int main()
{
    Time t1, t2;
    t1.set_time(13, 4, 56);
    t1.show_data();

    return 0;
}