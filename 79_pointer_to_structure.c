#include <stdio.h>
#include <string.h>
struct employee
{
    char name;
    int code;
    float salary;
};
int main()
{
    struct employee e1;
    e1.code = 12;
    struct employee *ptr;
    ptr = &e1;
    printf("%d", (*ptr).code);
    return 0;
}