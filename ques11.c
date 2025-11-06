#include <stdio.h>
int main()
{
     int n;
     printf("Enter the size of array : \n");    //Taking input of size of array
     scanf("%d",&n);
     int arr[n];
     int negatives[n];                    //Declaring arrays with temporary size
    int positives[n];
    int final[n];
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
  int negIndex = 0, posIndex = 0;
for (int i = 0; i < n; i++) {                //Applying a loop and check that the element of that index is positive or negative
    if (arr[i] < 0)
        negatives[negIndex++] = arr[i];      //If it is negative than put it into a negative array 
    else
        positives[posIndex++] = arr[i];         //if it is positive or zero put it in positive array 
}
int index = 0, i = 0;
for (i = 0; i < negIndex && i < posIndex; i++) {        //Merging that two arrays into final array in alternate indexes
    final[index++] = negatives[i];
    final[index++] = positives[i];
}
while (i < negIndex) final[index++] = negatives[i++];     //if there is extra element of negatives or positives, 
while (i < posIndex) final[index++] = positives[i++];     //than this loop will place that in continuation in final array

printf("\nRearranged array: \n");
for (int i =0;i<n;i++)                              //Printing final array
{
   printf("%d ",final[i]);
}
}     