#include<stdio.h>

void swap(int c[][50],int a,int b,int m){
	for(int i=0;i<m;i++){
		int temp=c[a][i];
		c[a][i]=c[b][i];
		c[b][i]=temp;
	}
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int c[50][50];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	swap(c,a-1,b-1,m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}	
	
}