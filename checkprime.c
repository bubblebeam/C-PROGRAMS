#include<stdio.h>
main()
{
int n,i,flag=0;
printf("enter the no");
scanf("%d",&n);
for (i=2;i<n/2;i++)
{
if (n%i==0)
{
printf("%d is not  prime",n);
flag=1;
break;
}
}
if(flag==0)
printf("%d is prime",n);
}

