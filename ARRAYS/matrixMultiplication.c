#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("\n");
    printf("Enter the number of rows and column of the first matrix:: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and column of the second matrix:: ");
    scanf("%d %d", &r2, &c2);

    int mat1[r1][c1];
    int mat2[r2][c2];

    int result[r1][c2];

    if (c1 == r2)
    {
        printf("Enter the elements of the first matrix:: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n");
        printf("Enter the elements of the second matrix:: \n");

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("\n");

        printf("The resultant matrix after multiplying matrix one and matrix two is:: \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            // i row o f mat1[][] and j column of mat2[][]
            //(mat1[i][0], mat1[i][1], mat[i][2].....) * (mat2[0][j], mat2[1][j], mat2[2][j].....)
            {
                result[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Bhai! Yh logical nhi h multiply krna.");
    }
    return 0;
}