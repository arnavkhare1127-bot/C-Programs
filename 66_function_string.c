#include <stdio.h>
#include <string.h>
int main()
{
    char source[50] = "Arnav";
    char target[] = "Khare";
    // STRCAT()= source mein target jod do
    strcat(source, target);
    printf("%s", source);
    return 0;
}