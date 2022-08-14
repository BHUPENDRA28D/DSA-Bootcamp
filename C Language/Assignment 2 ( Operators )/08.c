#include <stdio.h>
int main()
{
    int x = 6;
    int result = (x & 1);

    if (result == 1)
        printf("ODD");

    else
        printf("EVEN");
    return 0;
}