#include<stdio.h>
int main()
{
    int arr[]={10,2,34,78,14,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=14;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("element found at index %d",i);
        }
    }
    return 0;
}
