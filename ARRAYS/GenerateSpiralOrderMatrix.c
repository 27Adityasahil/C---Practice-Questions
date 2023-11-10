//Given an 'n x m' matrix "mat", print all elements of the matrix in spiral order. - Leetcode 54

#include <stdio.h>
int main()
{
    int n;

    printf("\n");
    printf("==> Enter the number of rows and column of the matrix:: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("\n");
    

    int minr = 0,     // MINIMUM ROW 0
        maxr = n - 1, // MAXIMUM ROW 4 - 1 = 3
        minc = 0,     // minimum column 0
        maxc = n - 1, // maximum column 4 - 1 = 3
        tne = n * n,  // total number of elements
        count = 0,    // variable to check the total element in the printed matrix
        count2 = 0; // for generating the original matrix

        printf("\n");
        printf("The original matrix will look like:: \n");

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                count2++;
                printf("%d ", count2);
            }
            printf("\n");
        }
    printf("\n");
    printf("The elements of the matrix in spiral order is:: \n");
    while (count < tne)
    {
        // stroing the minimum row
        for (int i = minc; i <= maxc && count < tne; i++)
        {
            count++;
            mat[minr][i] = count;
            
        }
        minr++;
        // storing the maximum column
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            count++;
            mat[i][maxc] = count;
        }
        maxc--;
        // storing the maximum row
        for (int i = maxc; i >= minc && count < tne; i--)
        {
            count++;
            mat[maxr][i] = count;
        }
        maxr--;
        // storing the minimum column
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            count++;
            mat[i][minc] = count;
        }
        minc++;
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}