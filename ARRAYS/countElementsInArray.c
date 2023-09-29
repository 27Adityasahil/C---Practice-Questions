#include <stdio.h>
int main(){
    int n, count= 0;
    printf("Enter number of elements:: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements to the list:: \n");
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    int checkNum;
    printf("Enter a number from the list to compare:: ");
    scanf("%d", &checkNum);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < checkNum){
            count= count + 1;
        }
    }
    printf("In the list you provided, the number of elements i.e. greater than \"%d\" is:: %d.", checkNum, count);
    return 0;
}