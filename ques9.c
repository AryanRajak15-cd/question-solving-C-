#include <stdio.h>
int main()
{
     int n;
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
     int count=0;                    //Initializer
     printf("Enter elements of array : \n");     //Taking input of elements of array
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
printf("Given array: \n");           //Printing the given array
     for(int i=0;i<n;i++) 
     {
        printf("%d ",arr[i]);
     }
    for(int i=0;i<n-1;i++)           //Sorting and couting the break points of given array
    {
        if(arr[i]>arr[i+1])
        {
            count++;
        }
        if(arr[n-1]>arr[0])
        {
            count++;
        }
    }
    printf("\n");
    if(count==1)
    {
        printf("Array is sorted and rotated");    // Printing the result 
    }
    else{
        printf("Array is not sorted and rotated");
    }
    
}