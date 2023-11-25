#include <iostream>
using namespace std;
class Greatest
{
private:
    int a, b, c, great;

public:
    void setValues(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int greatest()
    {
        return great;
    }
    void cal_greatest()
    {
        great = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
};
int main()
{
    Greatest g1;
    g1.setValues(23, 45, 2);
    g1.cal_greatest();
    cout << "Greatest = " << g1.greatest();

    return 0;
}