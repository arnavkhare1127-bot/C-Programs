/* Write a program to sum of natural numbers using while loop */
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        sum = sum + i;
        i++;
    }
    printf("The sum is %d", sum);

    return 0;
}