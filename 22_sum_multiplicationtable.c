/*Write a program to calculate the sum of the numbers occurring in the multiplication table*/
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i * n;
        printf("%d x %d = %d\n", n, i, i * n);
    }
    printf("The sum of table is %d", sum);

    return 0;
}