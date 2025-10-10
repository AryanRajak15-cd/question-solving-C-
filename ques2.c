#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements:\n");

    // Inputing the elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the array
    printf("Array in original order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    // Printing the array in reverse order
    printf("Array in reverse order: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

return 0;
}