/* What is rotation of array?

Suppose, we have an arr xyz[5] = {1, 2, 3, 4, 5};
let's imagine we are rotaing by 2 steps.
So, the new array will be: - 
xyz[5]={4, 5, 3, 2, 1}
*/

// In this question, we have to rotate the given array 'a' by k steps, where k is non-negative.

// Note: k can be greater than n as well, where n is the size of array 'a'.

#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for(int i = a, j =b; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[7] = {4, 6, 5, 8, 7, 2, 9};
    reverse(arr, 1, 4);
    for(int i = 0; i <= 6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}