#include <stdio.h>

int main() {
   
int n;
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
     int sum;
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
     printf("\nEnter the sum: \n");   //Taking input for the required sum
     scanf("%d\n",&sum);
   
    int start = 0;       
    int currentSum = 0;  
    int found = 0;       
    for (int end = 0; end < n; end++) {
         currentSum += arr[end];

       while (currentSum > sum && start < end) {
            currentSum -= arr[start];
            start++;
        }
        if (currentSum == sum) {
           printf("Subarray that gives sum equal to given number is : ");    //Printing the final result
            for (int i = start; i <= end; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            
        }
    }
}