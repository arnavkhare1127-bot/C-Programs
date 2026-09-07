#include <stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 77;
    printf("%d %d", facebook[0].code, facebook[1].code);
    return 0;
}