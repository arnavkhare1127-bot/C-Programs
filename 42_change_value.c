// Write a program to change the value of a variable to ten times of its current value.
#include <stdio.h>
void change(int *);
void change(int *a)
{
    *a = *a * 10;
}
int main()
{
    int i = 6;
    printf("Value of i is %d\n", i);
    change(&i);
    printf("Value of i is %d\n", i);
    return 0;
}