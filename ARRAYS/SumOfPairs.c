// find the total number of pairs in the array whose sum is equal to the value of x
#include <stdio.h>
int main()
{
    int n, count = 0, x;
    printf("Enter the number of elements:: ");
    scanf("%d", &n);

    printf("Enter the value of x:: ");
    scanf("%d", &x);

    int arr[n];
    printf("Enter the elements of this array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            if (arr[i] == arr[j])
                break;
            else if (arr[i] + arr[j] == x)
            {
                count = count + 1;
                printf("(%d, %d)", arr[i], arr[j]);
                printf("\n");
            }
        }
    }
    printf("\n");
    printf("Total number of pairs with sum equal to %d is: %d\n", x, count);
    return 0;
}