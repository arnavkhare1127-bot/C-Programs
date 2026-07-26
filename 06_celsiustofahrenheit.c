#include<stdio.h>
int main ()
{
    float C;

    printf("enter the temperature in celsius\n");
    scanf("%f", &C);

    printf("temperature in fahrenheit is %.2f", (9.0/5.0)*C + 32);

    return 0;
}
// Test contribution