//C PROGRAM TO IMPLEMENT PRIMS ALGO TO FIND MST
#include<stdio.h>
 
void main()
 
{
  
	int n,i,j,k,u,v;
 
	int visited[10]={0},min,adj[10][10],cnt=0,d[10],p[10],mincost=0;

	printf("\nEnter the number of nodes:");
 
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		d[i]=999;
		p[i]=-1;
	}

	printf("\nEnter the adjacency matrix:\n");
 
	for(i=1;i<=n;i++)
 
	for(j=1;j<=n;j++)
 
	{
 
		scanf("%d",&adj[i][j]);
 
		if(adj[i][j]==0)
 
			adj[i][j]=999;
 
	}
 
	d[1]=0;u=1;
 
	printf("\n");	
	
	printf("minimum spanning tree is \n");
	while (cnt<n)
	{
		
		 for(v=2;v<=n;v++)
		 {
			if(adj[u][v]!=999 && visited[v]!=1)
			{
				if(adj[u][v]<d[v])
				{
					d[v]=adj[u][v];
					p[v]=u;
				}
			
			}
		}

		visited[u]=1;cnt++;
		printf("%d->",u);

		min=999;


		for(k=2;k<=n;k++)
		{
			if(d[k]<min && visited[k]!=1)
			{
				min=d[k];
				u=k;
			}					
		}

		
	}

for(i=1;i<=n;i++)
printf("\n%d",d[i]);

for(i=1;i<=n;i++)
printf("\n %d",p[i]);

for(i=1;i<=n;i++)
mincost=mincost+d[i];

printf("\nminimum cost=%d",mincost);
}
