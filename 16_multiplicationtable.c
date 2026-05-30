#include <stdio.h>
int main()
{
int n; int i=1;
scanf("%d", &n);
for (int i = 1; i<=10; i++)
{
printf("%d x %d = %d\n", n, i, i*n);
}


    return 0;
}