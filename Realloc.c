#include<stdlib.h>
#include<stdio.h>
int main()
{
int i,n;
int * ptr;
printf("Enter the value of n:");
scanf("%d",&n);
if(ptr==NULL)
{
printf("No memory allocated.");
//exit(0);
}
else
{
ptr=(int *) malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
}
printf("Memory allocated is>>>");
for(i=0;i<n;i++)
{
printf("%d",ptr[i]);
}
n=10;
ptr=(int *) realloc(ptr,sizeof(int)*n);
printf("Memory Reallocated is>>>");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
printf("%d",ptr[i]);
}
return 0;
}