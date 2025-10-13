#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j = 0;
// taking size of array 
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));      // using malloc function to allocate dynamic memory
    int *temp = (int *)malloc(n * sizeof(int));
//taking elements of array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
//printing given array    
    printf("Given array:\n");
     for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
printf("\n");
   
// Move negative numbers to front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    // Move positive numbers to last
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
// printing final output
    printf("Reordered array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
// deallocation of free memory
    free(arr);
    free(temp);

 return 0;
}