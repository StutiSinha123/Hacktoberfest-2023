#include<stdio.h>
int main()
{
    int i,j,temp=0;
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
