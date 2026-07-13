/*Write a program to calculate the factorial of a given number using a for loop.*/
#include <stdio.h>
int main()
{
    int n;
    int product = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("Factorial is %d\n", product);

    return 0;
}