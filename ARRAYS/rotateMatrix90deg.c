//write a program to rotate a matrix 90° clockwise - Leetcode 48

/*
    step - 1: Transpose the given matrix
    step - 2: reverse each row of the transposed matrix
*/

#include <stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows and column:: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter the elements of the matrix:: ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("These are the elements of the matrix you entered:: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int mat2[c][r];
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            mat2[i][j] = mat[j][i];
        }
    }
// loop to print the transposed matrix
    // printf("\n");
    // for(int i = 0; i < c; i++){
    //     for(int j = 0; j < r; j++){
    //         printf("%d ", mat2[i][j]);
    //     }
    //     printf("\n");
    // }

    for(int i = 0; i < c; i++){ //loop to check condition and reverse the values of transposed matrix
        int j = 0; 
        int k = r - 1;
        while(j < k){
            int temp = mat2[i][j];
            mat2[i][j] = mat2[i][k];
            mat2[i][k] = temp;
            j++;
            k--;
        }
    }

    printf("This is the matrix after rotation of 90°:: \n");
    printf("\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}