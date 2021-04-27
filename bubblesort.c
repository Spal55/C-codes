#include<stdio.h>

int main()
{
   int l,temp,i,j,arr[50];

   printf("Enter the size of array : ");
   scanf("%d",&l);

   printf("Enter the numbers : \n");

   for(i=0;i<l;i++)
   scanf("%d",&arr[i]);

   for(i=0;i<l-1;i++)
   {
      for(j=0;j<l-i-1;j++)
      {
        if(arr[j]>arr[j+1])
        {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }
   printf("Sorted elements: \n");
   for(i=0;i<l;i++)
      printf("%d\n",arr[i]);

   return 0;
}