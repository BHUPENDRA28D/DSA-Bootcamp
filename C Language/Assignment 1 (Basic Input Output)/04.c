#include <stdio.h>

int main()
{
    int r;
    float area;

    printf("Enter radius of circle:-");
    scanf("%d", &r);

    area = 3.14 * r * r;
    printf("Area of circle is %f having the radius %d", area, r);
    return 0;
}