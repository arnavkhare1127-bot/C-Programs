#include <stdio.h>
int strlen(char st[])
{
    int i = 0, count;
    while (st[i] != '\0')
    {
        i++;
    }
    count = i;
    return count;
}


int main()
{
    char st[] = "Arnav";
    printf("%d", strlen(st));
    return 0;
}