#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;

    printf("enter the number 1\n");
    scanf("%d", &num1);

    printf("enter the number 2\n");
    scanf("%d", &num2);

    printf("enter the number 3\n");
    scanf("%d", &num3);

    printf("enter the number 4\n");
    scanf("%d", &num4);

    printf("Among the Numbers %d %d %d %d\n", num1, num2, num3, num4);
    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
    {
        printf("%d is greatest", num1);
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("%d is greatest", num2);
    }
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
    {
        printf("%d is greatest", num3);
    }
    else
    {
        printf("%d is greatest", num4);
    }
    return 0;
}