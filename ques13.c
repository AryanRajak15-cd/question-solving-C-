#include <stdio.h>
int main()
{
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
     
     printf("\nEnter the sum: \n");   //Taking input for the number you want to count
     scanf("%d\n",&sum);
     printf("Pairs that give %d as sum are: \n",sum);
     for(int i=0;i<n;i++)               //Printing pairs of numbers that give sum equal to given number
     {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            printf("(%d , %d)\n",arr[i],arr[j]);
        }
     }


}