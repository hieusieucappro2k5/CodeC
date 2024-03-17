#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	int ok=1;
	while(test--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m],b[m][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
				b[j][i]=a[i][j];
			}
		}
		int c[n][n];
		printf("Test %d:\n",ok);
		ok++;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				c[i][j]=0;
				for(int k=0;k<m;k++)
				{
					c[i][j]+=a[j][k]*b[k][i];
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) printf("%d ",c[i][j]);
			printf("\n");
		}
	}
}