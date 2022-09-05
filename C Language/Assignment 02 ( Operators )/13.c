#include <stdio.h>

int main()
{// its only for 3 digit number..
    int a = 874, r, q;
    r = a % 10;
    q = a / 10;

    a = (100 * r) + q;
    printf("%d", a);

    return 0;
}