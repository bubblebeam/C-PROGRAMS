#include<stdio.h>
int fibo(int k)
{
if(k==1)
return 0;
else if(k==2)
return 1;
else
return fibo(k-1)+fibo(k-2);
}
main()
{
int k,n,i;
printf("terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",fibo(i));
}
}
