 #include <stdio.h>
 int main()
 { 
    int arr[5]={10,5,9,3,4};
    int max=arr[0];
 for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }printf("maximum element : %d\n",max);


 int min=arr[0];
 for(int i=4;i>-1;i--){
    if(arr[i]<min){
        min=arr[i];
    }
 }printf("minimum element : %d",min);

 }