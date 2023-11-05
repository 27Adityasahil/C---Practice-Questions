// Write a program to find the transpose of a matrix entered by the user and store it in a new matrix

#include <stdio.h>

int main()
{

    int r, c;
    printf("Enter the rows and column of your matrix to find it's transpose:: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("\n");
    printf("Enter the elements of your matrix:: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    printf("The given matrix is:: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        { // loop for printing the original array for referrence
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        { // loop to transpose the given matrix by replacing the rows indices to column and elements too
            brr[i][j] = arr[j][i];
        }
    }

    printf("\n");
    printf("The transposed matrix is :: \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        { // printing the transposed array stored in a new matrix
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}