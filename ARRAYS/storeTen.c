//write a program to store 10 at every index of a 2 - D matrix with 5 rows and 5 columns

#include <stdio.h>
int main()
{

    int arr[5][5]; // a 2-D array of rows '5' and column '5'.

    for (int i = 0; i < 5; i++)
    { // This will refer to row.

        for (int j = 0; j < 5; j++)
        { 
            arr[i][j] = 10; // storing 10 at every index
        }
    }

    printf("\n"); // print the blank line just for a fine output

    for (int i = 0; i < 5; i++)
    { // Referring to the row index

        for (int j = 0; j < 5; j++)
        { // referring to the column index and will obtain the elements the present in the array - "10".

            printf("%d ", arr[i][j]); // print the output or "10"
        }
        printf("\n"); // print the next line
    }
    return 0;
}