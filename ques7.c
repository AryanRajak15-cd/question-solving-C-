#include <stdio.h>
int main()
{
   int n;
   // taking input of size of array
   printf("Enter size of array:\n");
   scanf("%d",&n);
   int arr[n];
   int temp;
   // taking input of elements of array
        printf("Enter elements of array:\n");
   for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
   // storing last element in a variable
   temp=arr[n-1];
   // printing given array
        printf("Given array:");
   for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
   // logic  
   for(int i=n-1;i>0;i--)
       arr[i]=arr[i-1];
   
   arr[0]=temp;
   printf("\n");
   // printing final output
   printf("Cyclically rotated array:");
   for(int i=0; i<n; i++)
   
    printf("%d ",arr[i]);
   
  
}