// count the number of triplets whose sum is equal to the given value x
#include <stdio.h>
int main(){
    int n, x, count = 0;
    printf("Enter the number of elements in the array:: ");
    scanf("%d", &n);
    printf("Enter the value to equate:: ");
    scanf("%d", &x);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The triplets are:: \n");
    for(int i = 0; i <= n-1; i++){
        for(int j = i+1; j <= n-1; j++){
            for(int k = j+1; k <= n-1; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    count = count + 1;
                    printf("(%d, %d, %d)", arr[i], arr[j], arr[k]);
                    printf("\n");
                }
            }
        }
    }
    printf("\n\nthe total number of triplets are:: %d", count);
    return 0;
}