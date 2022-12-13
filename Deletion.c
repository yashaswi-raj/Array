#include <stdio.h>
int main()
{
int pos,i,n;
printf("Enter number of elements in array\n");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the location where you wish to delete element\n");
scanf("%d",&pos);
if(pos>=n+1)    
printf("Deletion not possible.\n");
else
{    
for(i=pos-1;i<n-1;i++ ) 
arr[i]=arr[i+1];        
printf("Resultant array is\n");
for(i=0;i<n-1;i++)        
printf("%d\n", arr[i]);        
}    
return 0;
}