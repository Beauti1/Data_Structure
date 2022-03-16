#include<stdio.h>
#define MAX 20

main()
{
    int arr[MAX],i,j,k,n;
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("Unsorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(j=1;j<n;j++)
    {
        k=arr[j];
        for(i=j-1;i>=0 && k<arr[i];i--)
        {
            arr[i+1]=arr[i];
        }
        arr[i+1]=k;
    }
    printf("Sorted list:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
