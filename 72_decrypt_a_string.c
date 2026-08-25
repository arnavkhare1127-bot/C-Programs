/*Write a program to decrypt the string encrypted using encrypt function in previous question.*/
/*Write a program to encrypt a string by adding 1 to the ascii value ofits characters.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = "Bsobw";
    for (int i = 0; i < strlen(st); i++)
    {
        st[i] = st[i] - 1;
    }
    printf("%s", st);
    return 0;
}