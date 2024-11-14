#include<stdio.h>

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {

        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={24,65,2,89,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array\n");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("sorted array\n");
    printarray(arr,n);
    return 0;
}
