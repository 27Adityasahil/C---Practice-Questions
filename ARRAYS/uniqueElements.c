#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number of elements:: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("The unique elements in the given array are:: \n");
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}