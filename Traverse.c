#include<stdio.h>
int main()
{
int n,i;
printf("Enter no of data:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nThe elements are:");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
arr[i]=5+arr[i];
}
//for(i=0;i<n;i++)
//{
//arr[i]=5+arr[i];
//}
printf("Array formrd after addition:");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}