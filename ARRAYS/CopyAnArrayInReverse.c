// write a program to copy the contents of one array into another in the reverse order.

// (1.)Approach 1

#include <stdio.h>

int main()
{
    int n; // n is number of elements of the array
    printf("Enter the number of elements of your array:: ");
    scanf("%d", &n);
    int ori_Arr[n];
    printf("Enter the elements of the array:: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ori_Arr[i]);
    }
    printf("[");
    for (int i = (n - 1); i >= 0; i--)
    {
        printf("%d\t", ori_Arr[i]);
    }
    printf("]");
    return 0;
}

//(2.) Approach 2 - using extra array
#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int brr[7];
    for (int i = 0; i <= 6; i++)
    {
        brr[i] = arr[6 - i];
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}

// (3.) Approach 3 - using function
#include <stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 6;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}