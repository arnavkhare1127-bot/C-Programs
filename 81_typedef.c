#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    char name[10];
    float salary;
} Emp;

/*
   typedef int arnav;
   arnav a = 10;
   printf("The value of a is %d", a);
   return 0;
*/

int main()
{
    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 10;
    strcpy(e1.name, "Arnav");
    e1.salary = 54.52;
    printf("%d %s %f\n", e1.code, e1.name, e1.salary);
    printf("%d %s %f\n", ptr1->code, ptr1->name, ptr1->salary);
    return 0;
}