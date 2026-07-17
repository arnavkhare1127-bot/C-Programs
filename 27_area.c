/* Use the library function to calculate the area of a square with side a */
#include <stdio.h>
#include <math.h>

int main()
{
   int a;
   printf("Enter side length\n");
   scanf("%d", &a);

   printf("Area is %f", pow(a, 2));
   
   return 0;
}
