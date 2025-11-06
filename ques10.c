#include <stdio.h>
int main()
{
     int n;
     int leaders;                                //Taking temporary leader
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
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

     leaders=arr[n-1];                //Printing last element because last element is alawys a leader

printf("\nLEADERS in given array : \n");
printf("%d ",arr[n-1]);

    for(int i=n-2;i>=0;i--)               //Checking if the element at right side is greater than the current element by applying reverse loop 
    {
        if(arr[i]>=arr[i+1])
        printf("%d ",arr[i]);             //Printing rest leaders
    }
    


}     

