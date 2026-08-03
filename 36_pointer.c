#include <stdio.h>
int main()
{
    int i = 8;
    int* j;
    j = &i;
    printf("address i= %u\n", &i);
    printf("address i= %u\n", j);
    printf("address j= %u\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);
    return 0;
}