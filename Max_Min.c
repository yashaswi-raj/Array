#include<stdio.h>
int main()
{
int arr[10],size,i,min,max;
printf("Enter the size of the array>>>");
scanf("%d",&size);
printf("Enter the elements>>>");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("The array is>>>");
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
min=max=arr[0];
for(i=0;i<size;i++)
{
if(min>arr[i])
{
min=arr[i];
}
if(max<arr[i])
{
max=arr[i];
}
}
printf("Minimum element of the array is>>>%d",min);
printf("MAximum element of the array is>>>%d",max);
return 0;
}