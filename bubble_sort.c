#include<stdio.h>
#define MAX 20

main()
{
    int arr[MAX],i,j,k,temp,n;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    printf("Sorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
