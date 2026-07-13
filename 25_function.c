#include <stdio.h>
int sum(int, int); //function prototype

int sum(int x, int y) //function define
{
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    sum(a, b);

    int a1 = 12;
    int b1 = 32;
    sum(a1, b1);

    int a2 = 23;
    int b2 = 12;
    sum(a2, b2);

    return 0;
}