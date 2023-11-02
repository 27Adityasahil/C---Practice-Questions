// Given an array containing elements from 1 to 100. But one element is missing in this range. Find the missing element.
#include <stdio.h>
int main()
{
    int sum = 0;
    int arr[99];
    int n;
    // we are taking the input as missing number and we are storing it in "n".
    printf("Enter the number that is missing:: ");
    scanf("%d", &n);

    // The total sum of numbers from 1 to 100 is equal to 5050.
    int total = 5050;

    int missing_element; // variable to store the missing element

    for (int i = 0; i < 100; i++)
    { // a loop to store elements from 1 to 100 in the array

        if (i == n - 1)
            continue; // condition to exculde the missing element

        arr[i] = i + 1; // storing the values in the array

        printf("%d\n", arr[i]); // printing the array elements

        sum += arr[i]; // calculating and storing the sum of elements
    }
    missing_element = total - sum; // getting the final output

    printf("\nThe sum of numbers present in the array is:: %d\nand the missing number is:: %d", sum, missing_element); // printing the final output

    return 0;
}