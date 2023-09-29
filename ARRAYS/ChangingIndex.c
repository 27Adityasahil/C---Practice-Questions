#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of indices:: ");
    scanf("%d", &n);
    int arr[n];  //={5, 7, 8, 9, 46, 12, 13, 14, 21, 23};
    printf("Enter elements of the array:: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) arr[i] = arr[i] + 10;
        else arr[i] = arr[i] * 2;
        printf("%d\t", arr[i]);
    }
    return 0;    
}