#include <stdio.h>
int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char ch = 'A';
    char *pr = &ch;
    printf("The address of ch is %u\n", &ch);
    printf("The address of ch is %u\n", pr);
    pr++;
    printf("The address of ch is %u\n", pr);

    return 0;
}