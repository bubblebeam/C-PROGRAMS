#include<stdio.h>
main()
{
int n,i;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
printf("  %d",i);
}
}

