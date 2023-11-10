#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    //r1 and c1 is the row and column number of the first matrix respectively
    //and r2 and c2 is the rows and column number of the second  matrix respectively

    printf("\n");
    printf("Enter the number of rows and column of the first matrix:: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and column of the second matrix:: ");
    scanf("%d %d", &r2, &c2);

    int mat1[r1][c1];
    int mat2[r2][c2];

    //suppose we have a matrix "n x m" and the second matrix is "p x q", then 
        /*
    : - m should equal to p for the matrix multiplication
    : - and if multiplication happens, then the resultant matrix will be of "n x q"
        */

    int result[r1][c2];

    if (c1 == r2) // condition to check if the multiplication is possible
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

        /*
        Multiplication of matrix:: 
        a[1][2] = {1, 2};
        b[2][3] = {{1, 2, 3},
                   {4, 5, 6}};

        res[1][3] = ((1 * 1) + (2 * 4)) ((1* 2)+(2 * 5)) ((1 * 3) + (2 * 6)) {this will be the process to multiply}

        res[1][3] = {9, 12, 15}; this is the result
        */

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