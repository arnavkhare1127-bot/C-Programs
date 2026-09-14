/*Create an array of 5 complex numbers created in Previous Problem and display them with the help of a display function. The values must be taken as an input from the user.*/
#include <stdio.h>
struct complex
{
    int real;
    int imaginary;
};
void display(struct complex c)
{
    printf("The value of complex number is %d + %di \n", c.real, c.imaginary);
}

int main()
{
    struct complex arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part\n");
        scanf("%d", &arr[i].real);
        printf("Enter the imaginary part\n");
        scanf("%d", &arr[i].imaginary);
        display(arr[i]);
    }
    return 0;
}