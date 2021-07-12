#include<stdio.h>
int main()
{
int arr[10],n,i,round,temp;
printf("enter the number of elements in array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(round=1;round<n;round++)
    for(i=0;i<n-round;i++)
    if(arr[i]>arr[i+1])
{
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
printf("the sorted array\n");
for(i=0;i<n;i++)
{
    printf("  %d",arr[i]);
}
}
