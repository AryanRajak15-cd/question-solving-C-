#include <stdio.h>

int main() {
   
int n;
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
     int sum=0;
     printf("Enter elements of array : \n");     //Taking input of elements of array
     for(int i=0;i<n-1;i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("Given array: \n");           //Printing the given array
     for(int i=0;i<n-1;i++) 
     {
        printf("%d ",arr[i]);
     }

    for(int i=0;i<n-1;i++) {
        sum +=arr[i];
    }
    
    int expectedsum;
    int missingnumber;

    expectedsum= n*(n+1)/2;           //expected sum if array has all elements present
    missingnumber=expectedsum-sum ;
   
    printf("\n");
    printf("%d is the missing number in given array.", missingnumber);        //printing missing number
    return 0;
}