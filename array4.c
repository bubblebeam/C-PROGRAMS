#include<stdio.h>
main()
{
int n,n1,i,flag=1;
printf("how many nos to store");
scanf("%d",&n);
int a[n];
printf("enter no to delete");
scanf("%d",&n1);
printf("enter nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==n1)
{
a[i]=(-90);
flag=0;
break;
}
}
if(flag==1)
printf("no not present");
else
{
printf("the list after deletion:- ");
for (i=0;i<n;i++)
{
if(a[i]!=(-90))
printf(" %d ",a[i]);
}
}
}
