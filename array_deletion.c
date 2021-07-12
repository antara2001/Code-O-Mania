#include<stdio.h>
int main()
{
int n,i,pos,arr[10];
printf("enter the number of elements in the array = \n");
scanf("%d",&n);
printf("enter the elements in the array = \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements in the array = \n");
for(i=0;i<n;i++)
{
printf("arr[%d] = %d\n",i,arr[i]);
}
printf("enter the position element to delete = ");
scanf("%d",&pos);
for(i=pos;i<n-1;i++)
{
    arr[i]=arr[i+1];
}
n=n-1;
printf("the new array is = \n");
for(i=0;i<n;i++)
printf("arr[%d] = %d\n",i,arr[i]);
}
