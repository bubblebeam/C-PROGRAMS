#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
if(((i%2==0) &&( j%2==0))||((i%2!=0) &&( j%2!=0)))
printf("1");
else 
printf("0");
}
}
}

