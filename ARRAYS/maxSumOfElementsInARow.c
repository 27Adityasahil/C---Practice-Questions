//Write a program to print the row index having the maximum sum in a given matrix

#include <stdio.h>

int main(){

    int r, c, sum, maxSum = 0, row;
    
    printf("Enter the number of rows and column of matrix:: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter the elements of the array:: \n");

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < r; i++){
        sum = 0; //initializing the value of sum to 0 in every loop to calculate the sum of each row
        for(int j = 0; j < c; j++){
            sum = sum + mat[i][j];
        }
        if(maxSum < sum) //condition to check and store the value of maximum value of sum of elements in a row
         {
            maxSum = sum;
            row = i;
        }
    }
    printf("%d is the row with maximum sum value and the sum is %d.", row, maxSum);
}