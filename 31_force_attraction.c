/* Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g =9.8m/s2? */
#include <stdio.h>
float force(float);
float force(float m)
{
    return m * 9.8;
}
int main()
{
    int m;
    printf("Enter mass of body\n");
    scanf("%d", &m);
    printf("The force of attraction is %.2f", force(m));
    return 0;
}