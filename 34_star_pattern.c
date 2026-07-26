/*Write a program using function to print the star pattern (first n lines)
 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
       
    }
    printf("Number of stars in the last line = %d\n", 2 * (n - 1) + 1);
    return 0;
}