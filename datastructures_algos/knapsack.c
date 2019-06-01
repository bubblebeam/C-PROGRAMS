//C PROGRAM TO IMPLEMENT FRACTIONAL KNAPSACK PROBLEM.
//OBJECT WITH GREATER PROFIT/WEIGHT RATIO GIVEN MORE PRIORITY
#include<stdio.h>
#include<stdlib.h>

struct object
{
	float p;
	float w;
	float piwi;
}o[50];

main()
{
	int i,j,k,c,n;
	float profit=0,f=0;
	struct object val;
	printf("enter no of objects:");
	scanf("%d",&n);
	printf("enter capacity of knapsack:");
	scanf("%d",&c);
	printf("enter details\n");

	for(i=0;i<n;i++)
	o[i].piwi=-1;

	for(i=0;i<n;i++)
	{
		printf("enter profit of object %d:",i+1);
		scanf("%f",&o[i].p);
		printf("enter weight:");
		scanf("%f",&o[i].w);
		o[i].piwi=(o[i].p)/(o[i].w);
		for(j=0;j<n-1;j++)
		{
			val=o[j+1];
			k=j+1;
			while(k>0 && o[k-1].piwi<val.piwi)
			{
				o[k]=o[k-1];
				k--;
			}
			o[k]=val;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("object %d piwi=%f\n",i+1,o[i].piwi);
		printf("object %d profit=%f\n",i+1,o[i].p);
		printf("object %d weight=%f\n",i+1,o[i].w);
	}

	
	for(i=0;i<n;i++)
	{

		if(c>0)
		{
			if(o[i].w<c)
			{
				profit=profit+o[i].p;
				c=c-o[i].w;
			}
			else
			{
				f=c/o[i].w;
				profit=profit+f*(o[i].p);
				c=0;
			}
			printf("object %d is taken\n",i+1); 
		}
		else 
		break;
	}
	
	printf("profit is :%f",profit);
}
