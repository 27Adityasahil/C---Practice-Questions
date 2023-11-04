// Wite a program to add two matrices.

#include <stdio.h>

int main()
{

    int r1, c1, r2, c2, r, c; // r is row and c is column

    printf("Enter the number of rows and column of your first array:: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and column of your second array:: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) //as matrix addition only takes place if the dimension of arrays participating in the sum are similar
    {
        printf("\n");
        printf("Addition can not be performed b'coz the dimension is not similar.");
        printf("\n");
    }

    int a1[r1][c1]; // first array = a1

    printf("Enter the elements of the 1st matrix:: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a1[i][j]); //taking input for the element for the first array
        }
    }

    printf("\n");

    int a2[r2][c2]; // second array = a2

    printf("Enter the elements of the 2nd matrix:: \n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &a2[i][j]); //taking input for the element for the second array
        }
    }

    printf("\n");
    printf("The sum of matrix you entered is :: \n");

    if (r1 == r2 && c1 == c2)
    {
        int sumOfmatrix[r1][c1];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                sumOfmatrix[i][j] = a1[i][j] + a2[i][j]; //adding the elements of array one and two while matching their corresponding indices
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d  ", sumOfmatrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}