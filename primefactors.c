#include<stdio.h>
main()
{
int n,i,flag=0,j;
printf("enter the no whose factors are to be calculated\n");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
if (n%i==0)
{
{
for (j=2;j<=i/2;j++)
{
flag=0;
if (i%j==0)
{
flag=1;
break;
}
}
if (flag==0)
printf("\n%d",i);
}
}
}
