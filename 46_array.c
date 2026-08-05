/*Write a program to accept marks of five students in an array
and print them on the screen.*/
#include <stdio.h>
int main()
{
    int marks[5];
   // scanf("%d", &marks[0]);
   // scanf("%d", &marks[1]);
   // scanf("%d", &marks[2]);
   // scanf("%d", &marks[3]);
   // scanf("%d", &marks[4]);
   for (int i=0; i < 5; i++)
   {
    scanf("%d", &marks[i]);
   }
   // printf("Marks 1 is %d\n", marks[0]);
   // printf("Marks 2 is %d\n", marks[1]);
   // printf("Marks 3 is %d\n", marks[2]);
   // printf("Marks 4 is %d\n", marks[3]);
   // printf("Marks 5 is %d\n", marks[4]);
   for (int i = 0; i < 5; i++)
   {
    printf("Marks %d is %d\n",i+1, marks[i]);
   }
   
    return 0;
}