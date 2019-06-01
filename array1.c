#include<stdio.h>
int main()
{
int i,n;
printf("enter the no of elements to store");
scanf("%d",&n);
int a[n];
printf("enter the nos\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("entered nos are\n");
for(i=0;i<n;i++)
printf("  %d",a[i]);
}


