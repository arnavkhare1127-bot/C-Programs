/*Write a program to count the occurrence of a given character in a string.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'i';
    int count = 0;
    char st[] = "india";
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}