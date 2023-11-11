//Write a program to change the given n x n matrix to it's transpose (same array will be changed, not to use any extra array)

#include <stdio.h>

int main(){

    int n;
    printf("Enter the rows and column of your 'n x n' matrix to find it's transpose:: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements of your %d x %d matrix:: \n", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
//printf("The original matrix is:: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ // loop for printing the original array for referrence
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){ // loop to transpose the given matrix by replacing the rows indices to column and elements too
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

//printf("The transpose matrix is:: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ // printing the transposed array stored in the same matrix
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}