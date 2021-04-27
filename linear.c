#include <stdio.h>
int main()
{
    int arr[50],n,len,c=0;
    printf("Enter number of elements of an array : \n");
    scanf("%d",&len);
    printf("\nEnter elements: \n");
    for (int i=0;i<len;i++)
        scanf("%d",&arr[i]);
    printf("\n");
    printf("\nEnter element to search: ");
    scanf("%d",&n);
    for (int i=0;i<=len;i++)
        if (n==arr[i])
        {
           c++;
        }
    if(c>0)
        printf("Found %d times ...\n",c);
    else
        printf("Not Found...\n");

}