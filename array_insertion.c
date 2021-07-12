#include<stdio.h>
int main()
{
int arr[10],n,i,pos,num;
printf("enter how many elements in the array = ");
scanf("%d",&n);
printf("enter the elements in the array = \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements in the array is = \n");
for(i=0;i<n;i++)
printf("arr[%d]= %d\n",i,arr[i]);
printf("\n\n");
printf("enter the number to be inserted = ");
scanf("%d",&num);
printf("enter the place where to be inserted = ");
scanf("%d",&pos);
for(i=n-1;i>=pos;i--)
{
    arr[i+1]=arr[i];
}
arr[pos]=num;
n= n+1;
printf("the new array is = \n");
for(i=0;i<n;i++)
    printf("arr[%d] = %d\n",i,arr[i]);
}
