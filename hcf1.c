#include<stdio.h>
main()
{
int n1,n2,smallest,i,hcf,lcm;
printf("enter 2 nos\n");
scanf("%d %d",&n1,&n2);
if(n1<n2)
smallest=n1;
else
smallest=n2; 
for(i=1;i<=smallest;i++)
{
if((n1%i==0) && (n2%i==0))
hcf=i;
}   
printf("the hcf is=%d\n",hcf);
lcm=(n1*n2)/hcf;
printf("lcm=%d",lcm);
}
    
    

