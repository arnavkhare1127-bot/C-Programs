#include<stdio.h>
int main ()
{
    float SI;
    float P;
    float T;
    float R;

    printf("enter the P\n");
    scanf("%f",&P);

    printf("enter the T\n");
    scanf("%f",&T);

    printf("Rate of R\n");
    scanf("%f",&R);

    printf("SI will be %.2f", (P * T * R)/100) ;

    return 0;
}