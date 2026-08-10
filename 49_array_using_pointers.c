#include <stdio.h>
int main()
{
    int marks[] = {12, 24, 36, 48};
    int *ptr = &marks[0];

    // int* ptr=marks; --> same as ---> int* ptr= &marks[0];

    for (int i = 0; i < 4; i++)
    {

        // printf("The address of marks %d is %u\n", i+1, &marks[i]);

        printf("The value of marks %d is %u\n", i + 1, *ptr);
        ptr++;
    }

    return 0;
}