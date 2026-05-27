/* To pass, a student requires a total of 40% and at least 33% in each subject.
Assume there are three subjects */
#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;

    printf("Enter the marks1\n");
    scanf("%d", &marks1);

    printf("Enter the marks2\n");
    scanf("%d", &marks2);

    printf("Enter the marks3\n");
    scanf("%d", &marks3);

    printf("The marks in each subject are %d %d %d\n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are Fail due to less marks in each subjects");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are Fail due to less percentage");
    }
    else
    {
        printf("Pass");
    }
    return 0;
}