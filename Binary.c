#include<stdio.h>
int main()
{
int n,i,j,temp,key,low,mid,high;
printf("Enter no of data:");
scanf("%d",&n);
int a[n];
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe elements are:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nThe sorted array is:");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j]) 
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("%d ",a[i]);
}
printf("\nEnter the search key:");
scanf("%d",&key);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
 {
if(a[mid]<key)
{
low=mid+1;
}
else if(a[mid]==key)
{
printf("\nThe key is found.\nThe position of the key is: %d",mid+1);
break;
}
if (a[mid]>key)
{
high=mid-1;
}
mid=(low+high)/2;
}
return 0;
}