#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int a[20][20],c[20][20];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]); 
				c[j][i]=a[i][j];
			}
		}
		printf("Test %d:\n",k);
		k++;
		int b[20][20];
		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<n;j++)
			{		
				b[i][j]=0;
				for(int k=0;k<m;k++)
				{
					b[i][j]+=a[i][k]*c[k][j];
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) printf("%d ",b[i][j]);
			printf("\n");
		}		
	}
}