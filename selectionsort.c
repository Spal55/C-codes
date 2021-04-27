#include <stdio.h>
void selectionSort(int arr[], int n)
{ 
	int temp,min_idx;
	for(int i=0;i<n-1;i++)
	{
		min_idx=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		if(min_idx!=i)
		{
			temp=arr[min_idx];
			arr[min_idx]=arr[i];
			arr[i]=temp;
		}
	}
}
void printArray(int arr[],int s)
{
    for (int i=0;i<s;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    int arr[5];
    printf("Enter the Elements :  \n");
    for (int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    selectionSort(arr,5);
    printf("Sorted array: \n");
    printArray(arr,5);
    return 0;
}