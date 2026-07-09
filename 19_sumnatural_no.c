/* Write a program to sum of natural numbers using for loop */
#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("The sum is %d", sum);
    return 0;
}