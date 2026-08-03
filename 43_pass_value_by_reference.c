// Write a function and pass the value by reference.
#include<stdio.h>
void reference(int*);
void reference(int* a)
{
    *a= *a+1;
}
int main()
{
    int i=10;
    printf("the value of i is %d\n", i);
    reference(&i);
    printf("the value of i is %d\n", i);

    return 0;
}