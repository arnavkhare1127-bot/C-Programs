// area of circle and modify prog to find volume of cylinder
#include <stdio.h>

int main()
{
    int radius;
    int height;

    printf("enter the radius\n");
    scanf("%d", &radius);

    printf("enter the height\n");
    scanf("%d", &height);

    printf("area of circle is %.2f\n", 3.14 * radius * radius);

    printf("volume of cylinder is %f\n", 3.14 * radius * radius * height);

    return 0;
}