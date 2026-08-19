#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Arnav";
    char target[50];
    // STRCPY()= target mein source copy 
    strcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}