#include<stdio.h>
int selection_sort(int n,int arr[])
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	result(n,arr);
}
int result(int n,int arr[])
{
	int i;
	printf("The sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(n,arr);
}
