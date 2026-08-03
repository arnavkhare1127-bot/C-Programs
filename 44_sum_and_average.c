/* Write a program using a function which calculates the sum
and average of two numbers.
Use pointers and print the values of sum and average in main().*/
#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b)
{
    return *a + *b;
}
float average(int *, int *);
float average(int *a, int *b)
{
    return (*a + *b) / 2.0;
}
int main()
{
    int x = 5, y = 6;
    printf("sum is %d\n", sum(&x, &y));
    printf("average is %.2f\n", average(&x, &y));
    return 0;
}
