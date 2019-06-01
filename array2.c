#include<stdio.h>
main()
{
int i,n,max=0;
printf("enter the no of elements to store");
scanf("%d",&n);
int a[n];
printf("enter the nos\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if (max<a[i])
max=a[i];
}
printf("maximum no is=%d",max);
}


