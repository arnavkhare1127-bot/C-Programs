/*Create a string using double quotes and print its content using a loop.*/
#include <stdio.h>
int main()
{
    char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 2; i++)
    {
        printf("Character is %c\n", st[i]);
    }

    return 0;
}