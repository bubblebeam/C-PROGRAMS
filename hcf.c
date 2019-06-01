#include<stdio.h>
main()
{
int na,nb,largest,i,hcf,lcm;
printf("enter 2 nos");
scanf("%d%d",&na,&nb);
if(na>nb)
na=largest;
else
nb=largest;
for(i=1;i<=largest;i++)
{
if((na%i==0) && (nb%i==0))
hcf=i;
}
printf("the hcf is=%d",hcf);
}



