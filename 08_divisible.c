//check whether the number is divisible by 97 or not.
#include<stdio.h>
int main()
{
    int a;
    int b=97;
    printf("enter the number\n");
    scanf("%d", &a);
    if(a%b==0)
    {
    printf("Number is divisible");
    }
    else
    {
        printf("Number is not divisible\n");
        printf("The remainder is %d", a%b);
    }
    return 0;
}