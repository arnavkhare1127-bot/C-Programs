/* Write a program to print the value of a variable i by using
"pointer to pointer" type of variable.*/
#include <stdio.h>
int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("Value of j is %d\n", *j);
    printf("Value of i is %d\n", **k);
    printf("Value of i is %d\n", *(&i));
    printf("Value of i is %d\n", **(&j));
    printf("Value of i is %d\n", ***(&k));
    return 0;
}