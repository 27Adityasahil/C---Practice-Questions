// Write a program to store roll numbers and marks obtained by 4 students side by side in a matrix.

// our format will be as follows::
/*
    roll no. marks
        1       56
        2       64
        3       74
        4       47
*/

#include <stdio.h>
int main()
{

    int record[4][2]; // a 2-D array of rows '4' and column '2'.

    for (int i = 0; i < 4; i++)
    { // This will refer to row.

        for (int j = 0; j < 2; j++)
        { // inner loop to store roll number and marks entered respectively. This is referring to column
            scanf("%d", &record[i][j]);
        }
    }

    printf("\n"); // print the blank line just for a fine output

    for (int i = 0; i < 4; i++)
    { // Referring to the row index

        for (int j = 0; j < 2; j++)
        { // referring to the column index and will obtain the elements present in the array - "record".

            printf("%d ", record[i][j]); // print the output or the roll number followed by their respective marks
        }
        printf("\n"); // print the next line
    }
    return 0;
}