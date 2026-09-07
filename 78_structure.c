#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
int main()
{
    struct employee arnav = {100, "Arnav", 54.556};
    printf("%d %f %s", arnav.code, arnav.salary, arnav.name);

    return 0;
}