//Given an 'n x m' matrix "mat", print all elements of the matrix in spiral order. - Leetcode 54

#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the number of rows and column of the matrix:: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("\n");
    printf("Enter the elements of the '%d x %d' matrix:: \n", r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");
    // refer to the image in the repository for the following: -

    /*
        1  2  3  4  |
        5  6  7  8  |  result should look like : - 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
        9 10 11 12  |  here we have 4 x 4 matrix. r = 4; c = 4
        13 14 15 16 |
    */

    int minr = 0,     // MINIMUM ROW 0
        maxr = r - 1, // MAXIMUM ROW 4 - 1 = 3
        minc = 0,     // minimum column 0
        maxc = c - 1, // maximum column 4 - 1 = 3
        tne = r * c,  // total number of elements
        count = 0;    // variable to check the total element in the printed matrix
    printf("The elements of the matrix in spiral order is:: \n");
    while (count < tne)
    {
        // print the minimum row
        for (int i = minc; i <= maxc && count < tne; i++)
        {
            printf("%d ", mat[minr][i]);
            count++;
        }
        minr++;
        // print the maximum column
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", mat[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for (int i = maxc; i >= minc && count < tne; i--)
        {
            printf("%d ", mat[maxr][i]);
            count++;
        }
        maxr--;
        // print the minimum column
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", mat[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}