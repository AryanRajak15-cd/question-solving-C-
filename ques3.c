#include <stdio.h>

int main() {
    int n, k, i, j, temp;
    // Step 1: taking input for size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: taking input for elements of array
    printf("Enter elements of array:");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: taking value k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Bubble sort to sort the array in ascending order
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
  }
    }

    // Step 4: give output
    // kth min: k-1 th index
    // kth max: n - k th index
    if(k > 0 && k <= n) {
        printf("The %dth minimum element is: %d\n", k, arr[k-1]);
        printf("The %dth maximum element is: %d", k, arr[n-k]);
    } else {
        printf("Invalid value of k");
    }

return 0;
}