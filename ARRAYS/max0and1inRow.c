//Given a matrix having 0 and 1 only, find the row with the maximum number of 1's

#include <stdio.h>
int main(){
    int r, c,count_of_one, maxCount = 0, row = 0;

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
        count_of_one = 0; //resetting the count of one value to zero everytime to calculate and count the number of 1 in a respective ith row
        for (int j = 0; j < c; j++){
            if(mat[i][j] == 1){
                count_of_one++;
            }
        }
        if(maxCount < count_of_one){ // condition to check and store the value of maximum count and rowth index
            maxCount = count_of_one;
            row  = i;
        }
    }

    printf("%d is the row index with maximum number of 1's.", row);
    return 0;

}