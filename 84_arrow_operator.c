/*Write a program to illustrate the use of arrow operator → in C.*/
#include <stdio.h>
struct employee
{
    int code;
    float salary;
};
int main()
{
    struct employee e1;
    e1.code = 45;
    struct employee *ptr = &e1;
    printf("The value of code is %d", ptr->code);
    return 0;
}