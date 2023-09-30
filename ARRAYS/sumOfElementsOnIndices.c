// in this program, I have to find the difference between sum of values on odd indices and even indices. I have used c language to solve this.
#include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0;
    printf("Enter the number of indices:: ");
    scanf("%d", &n);
    int arr[n];  //={5, 7, 8, 9, 46, 12, 13, 14, 21, 23};
    printf("Enter elements of the array:: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sum1 = sum1+ arr[i];
        }
        else sum2= sum2 + arr[i];
    }
    printf("sum 1 is :: %d and sum 2 is ::%d.\n", sum1, sum2);
    printf("Difference of sum 1 and sum2 is :: %d.\n",(sum1 - sum2));
    return 0;
}