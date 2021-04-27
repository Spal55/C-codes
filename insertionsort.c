#include<stdio.h>
int main()
{
   int x,len,temp,arr[25];
   printf("Enter the size of array : ");
   scanf("%d",&len);
   printf("\n");
   printf("Enter the elements: \n");
   for(int i=0;i<len;i++)
      scanf("%d",&arr[i]);

   for(int i=1;i<len;i++)
   {
      temp=arr[i];
      x=i-1;
      while((temp<arr[x])&&(x>=0))
      {
         arr[x+1]=arr[x];
         x=x-1;
      }
      arr[x+1]=temp;
   }

   printf("Sorted elements: \n");
   for(int i=0;i<len;i++)
      printf("%d\n",arr[i]);

   return 0;
}