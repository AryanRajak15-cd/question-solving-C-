#include <stdio.h>

int main() {
    int n, i, valid = 1;
    // taking input of the size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    // inputting the elements of array
    printf("Enter %d elements (only 0, 1, or 2):", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] != 0 && arr[i] != 1 && arr[i] != 2) {
            valid = 0;
        }
    }
    // printing given array
    printf("Given array :");
    for(i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    } printf("\n");

// rule set for invalid choice of elements
    if (!valid) {
        printf("Invalid input for array!!!!\n");
        printf("Execution fails due to invalid input!!!!");
        return 0;
    }
  // Dutch National Flag algorithm
    int low = 0, mid = 0, high = n - 1, temp;
    while(mid <= high) {
        if(arr[mid] == 0) {
            // swap arr[low] and arr[mid]
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            // swap arr[mid] and arr[high]
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
// printing final array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ");
 return 0;
}