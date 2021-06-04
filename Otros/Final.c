#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int i,j,h,n,m,w,u,a[100][100],b[100][100],c[100],max;
	h=1;
	printf("Dame el numero de renglones ");
	scanf("%d",&n);
	printf("Dame el numero de columnas ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("Dame un numero %d : ",h);
			scanf("%d",&a[i][j]);
			h++;
		}
	}
	max=a[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				w=j;
				b[i][j]=max;
			}
		}
		max=a[i][j];
	}
	printf("Columna mayor\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++);
		{
			printf("%d ",b[i][w]);
		    printf("\n");
		}
	}
}
