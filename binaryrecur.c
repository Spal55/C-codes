
#include <stdio.h>

int binsearch(int arr[],int l,int r,int x)
{
	if (r>=l) 
	{
		int mid=l+(r-l)/2;
		if (arr[mid]==x)
			return mid;
		if (arr[mid]>x)
			return binsearch(arr,l,mid-1,x);
		
		return binsearch(arr,mid+1,r,x);
	}
	return -1;
}

int main(void)
{
	int arr[10];
	int n =sizeof(arr)/sizeof(arr[0]);
	printf("Enter the elements : \n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
    printf("Enter the element to be searched :  ");
    int x;
    scanf("%d",&x);
	int result =binsearch(arr,0,n-1,x);
	(result==-1) ? printf("The element is not present in array")
	: printf("The element is present at index %d",result);
	return 0;
}
