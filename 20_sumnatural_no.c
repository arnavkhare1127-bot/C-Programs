/* Write a program to sum of natural numbers using do while loop */
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    int sum = 0;
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("The sum is %d", sum);
    return 0;
}