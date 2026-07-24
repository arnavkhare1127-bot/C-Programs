/* Write a function to convert Celsius temperature into Fahrenheit */
#include <stdio.h>
float temperature(float C);
float temperature(float C)
{
    return (C * 9 / 5) + 32;
}

int main()
{
    int C;
    printf("Enter temperature in celsius\n");
    scanf("%d", &C);
    printf("The temperature in fahrenheit is %.2f\n", temperature(C));
    return 0;
}