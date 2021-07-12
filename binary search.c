#include<stdio.h>
int main()
{
int arr[10],i,n,item,loc=0,beg=0,mid,end;
printf("enter the total number of element\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the number to be search\n");
scanf("%d",&item);
end=n-1;
while((beg<=end))
{
mid=((end+beg)/2);
if(item==arr[mid])
{
printf("the search is successful\n");
loc=mid+1;
printf("the position is %d",loc);
break;
}
else if (item<arr[mid])
end = mid -1;
else
beg = mid +1;
}
if (loc == 0)
printf("not found");
}
