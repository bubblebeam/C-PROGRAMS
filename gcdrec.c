// TO CALCULATE GCD OF 2 NUMBERS USING RECURSION
#include<stdio.h>
main()
{
int r,x,y;
printf("enter 2 nos");
scanf("%d%d",&x,&y);
while(y!=0)
{
  r=x%y;
  x=y;
  y=r;
 }
 printf("gcd=%d",x);
}
