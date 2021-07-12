#include<stdio.h>
void insertion_sort(int arr[], int n);
int main()
{
int arr[100], i,n;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
insertion_sort(arr , n);
printf("the sorted array is\n");
for(i=0;i<n;i++)
printf(" %d",arr[i]);
}
void insertion_sort(int arr[], int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp = arr[i];
j=i-1;
while((temp<arr[j]) && j>=0)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
}
