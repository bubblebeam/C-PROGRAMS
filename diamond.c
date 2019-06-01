#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=4;i++)
{
printf("\n");
for(j=4-i;j>=1;j--)
printf(" ");
for(j=1;j<=i;j++)
printf(" *");
}
for(i=3;i>=1;i--)
{
printf("\n");
for(j=4-i;j>=1;j--)
printf(" ");
for(j=1;j<=i;j++)
printf(" *");
}
}

