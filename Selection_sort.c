#include<stdio.h>
#define MAX 20

main()
{
    int arr[MAX],i,j,k,temp,n,smallest;
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
        smallest=i;
        for(k=i+1;k<n;k++)
        {
            if(arr[smallest]>arr[k])
            {
                smallest=k;
            }
            if(i!=smallest)
            {
                temp=arr[i];
                arr[i]=arr[smallest];
                arr[smallest]=temp;
            }
        }
    }
    printf("Sorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
