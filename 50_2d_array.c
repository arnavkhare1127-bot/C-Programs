#include <stdio.h>
int main()
{
    int arr[3][2] = {{1, 4},
                     {2, 5},
                     {5, 8}};

    // printf("arr[0][0]=%d\n", arr[0][0]);
    // printf("arr[0][1]=%d\n", arr[0][1]);
    // printf("arr[1][0]=%d\n", arr[1][0]);
    // printf("arr[1][1]=%d\n", arr[1][1]);
    // printf("arr[2][0]=%d\n", arr[2][0]);
    // printf("arr[2][1]=%d\n", arr[2][1]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}