// wave form of a matrix
//********************** form 1 *****************************
/*
from this::

1 2 3 4
5 6 7 8
9 10 11 12

to this:: 

    1 2 3 4
    8 7 6 5
    9 10 11 12
*/
#include <stdio.h>

int main(){
    int r, c;
    printf("\n");
    printf("Enter the number of rows and column of the matrix:: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter the elements of the '%d x %d' matrix:: \n", r, c);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");
    printf("The first wave form of the given matrix is:: \n");
    for(int i = 0; i < r; i++){
        if(i == 0 || i % 2 == 0){
            for(int j = 0; j < c; j++){
                printf("%d ", mat[i][j]);
            }
        }
        else{
        for(int j = c - 1; j >= 0; j--){
            printf("%d ", mat[i][j]);
        }
        }
        printf("\n");
    }

    printf("\n");
    //********************** form 2 *****************************
/*
from this::

1 2 3 4
5 6 7 8
9 10 11 12

to this:: 

    9 5 1
    2 6 10
    11 7 3
    4 8 12
*/
    printf("The second wave form of the given matrix is:: \n");
    for (int i = 0; i < c; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = r - 1; j >= 0; j--)
            {
                printf("%d ", mat[j][i]);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < r; j++)
            {
                printf("%d ", mat[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}