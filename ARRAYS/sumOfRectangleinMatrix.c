// given a matrix 'a' of dimension n x m and 2 coordinates (I1, R1) and (I2, R2). Return the sum of rectangle from (I1, R1) to (I2, R2).

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows and column of your matrix:: ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("\n");
    printf("Enter the elements of your array:: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int I1, R1, I2, R2, sum = 0;

    printf("\n");
    printf("Enter the value of your coordinates of I1 and R1 (in terms of indices of array '0, 1, 2 ....'): ");
    scanf("%d %d", &I1, &R1);

    printf("\n");
    printf("Enter the value of your coordinates of I2 and R2: ");
    scanf("%d %d", &I2, &R2);

    for (int i = I1; i <= I2; i++) //outer loop (row) will start from index valued to I1 and end at I2
    {
        for (int j = R1; j <= R2; j++) //inner loop (column) start from index values to R1 and end at R2
        {
            sum += a[i][j]; //calculate the sum of elements in the range of (I1, R1) to (I2, R2)
        }
    }

    printf("\n");
    printf("The sum of elements forming rectangle from index a[%d][%d] to a[%d][%d] is :: %d.", I1, R1, I2, R2, sum);

    return 0;
}