#include<stdio.h>
int linear(int ar[],int n,int key)
{
	int i,f=0,pos,c=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==key)
		{

		pos=i;

		f=1;
		break;

		}
		else
		{
			f=0;
			 c++;

		}

	}
	if(f==1)
	{
		printf("Key found at: %d\n",pos);
		printf("number of iteration = %d",c);
			}
	else
	{
		printf("Not found");
	}
}

int main()
{
	int arr[10],i,n,key;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key: ");
	scanf("%d",&key);
	linear(arr,n,key);
}
