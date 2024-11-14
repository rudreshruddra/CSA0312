#include<stdio.h>
int main()
{
  int arr[]={2,5,8,12,16,23,38,56,72,91};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=23;
  int low=0;
  int high=n-1;
  int mid;
  while(low<=high)
  {
    mid=low+(high-low)/2;
    if(arr[mid]==x)
    {
      printf("the position of searching number is %d",mid);
      break;
    }
    if(arr[mid]<x)
    {
       low=mid+1;
    }
    else
    {
     high=mid-1;
    }
  }
  if(low>high)
  {
      printf("number not found");
  }
  return 0;
}
