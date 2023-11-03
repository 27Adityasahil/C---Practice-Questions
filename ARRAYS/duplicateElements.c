// write a program to find a duplicate element from a given array of integers

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements of array:: "); // asking for the number of elements in our array
    scanf("%d", &n);
    int arr[n]; // storing the n as array index

    for (int i = 0; i < n; i++)
    { // loop to take input and store it in array
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    { // outer loop that will be treated as the original number / elements
        for (int j = i + 1; j < n; j++)
        { // inner loop that will match the rest of elements of the array
            if (arr[i] == arr[j])
            {                                                      // condition for checking the equality
                printf("%d is duplicate at index %d.", arr[i], j); // printing the duplicate element with it's index
                printf("\n");
            }
        }
    }
}