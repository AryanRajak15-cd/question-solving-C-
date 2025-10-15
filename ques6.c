#include <stdio.h>
// creating a function to find and print union of array
void printUnion(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    printf("Union of Arrya1 and Array2: ");
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            printf("%d ", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf("%d ", arr2[j++]);
        else {
            printf("%d ", arr2[j++]);
            i++;
        }
    }
    while (i < m)
        printf("%d ", arr1[i++]);
    while (j < n)
        printf("%d ", arr2[j++]);
    printf("\n");
}
// creating a function to find and print intersection of array
void printIntersection(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    printf("Intersection of Arrya1 and Array2: ");
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else {
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }
    printf("\n");
}
int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter elements of first array (sorted): ");
    for(int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter elements of second array (sorted): ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    printUnion(arr1, arr2, m, n);
    printIntersection(arr1, arr2, m, n);
 return 0;
}