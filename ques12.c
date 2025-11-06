#include <stdio.h>
int main()
{
     int n;
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
     int x;
     int count=0;
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
     
     printf("\nEnter element you want to count: ");   //Taking input for the number you want to count
     scanf("%d",&x);
     
     for(int i=0;i<n;i++)           //Linear search in array
     {
       if(arr[i]==x)
       {
        count++;            //If the no. is present than count will increase
       }
     }
     if(count<=0)
     printf("It is not present in given array");            //Printing the result 
     else
     printf("%d is present %d times",x,count);
}