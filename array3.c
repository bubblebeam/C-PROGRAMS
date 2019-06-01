#include<stdio.h>
int main()
{
int i,n,no,flag=0,cnt=0;
printf("enter the no of elements to store");
scanf("%d",&n);
int a[n];
printf("enter the no to search");
scanf("%d",&no);
printf("enter the nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if (no==a[i])
{
flag=1;
cnt++;
printf("the no %d is present at %d location\n",no,i+1);
}
}
if(flag==1)
printf("the no is present %d times",cnt);
if(flag==0)
printf("no not present");
}
