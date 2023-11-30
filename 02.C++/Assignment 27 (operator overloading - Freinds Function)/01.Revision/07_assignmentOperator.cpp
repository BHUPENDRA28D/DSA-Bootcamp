#include <iostream>
#include <string.h>
using namespace std;
class Mystring
{
private:
    char *a;
    int size;

public:
    Mystring()
    {
        cout << "Defualt Constructor Called" << endl;
        a = (char *)malloc(1);
        size = 1;
    }
    Mystring(char *str)
    {
        cout << "String Constructor Called " << endl;
        size = strlen(str);

        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }
    void display()
    {
        cout << "Name :- " << a << endl;
    }
};

int main()
{
    Mystring s1("Bhupendra"), s2;

    s1.display();
    s2 = s1;
    s2.display();

    return 0;
}