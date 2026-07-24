/*Since we can write factorial of a number in terms of itself,
we can program it using recursion*/
#include <stdio.h>

int factorial(int);
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int a;
    scanf("%d/", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}