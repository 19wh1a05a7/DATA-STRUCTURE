#include<stdio.h>
void insertion(int [], int );
int main()
{
 int arr[30];
 int i,size;
 
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 for(i=0; i<size; i++)
 {
    printf("enter %d elements:  ",i+1);
    scanf("%d",&arr[i]);
 }
    printf("sorted elements: \n");
 insertion(arr,size);

 for(i=0; i<size; i++)
    printf(" %d",arr[i]);
 
 return 0;
}
void insertion(int arr[], int size)
{
 int i,j,t;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      t=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=t;
      
    }
    
   
   }
 }
}
