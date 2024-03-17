#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[50][50];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{	
		int k;
		for(int j=0;j<1;j++)
		{
			int temp=a[i][i];
			a[i][i]=a[i][n-i-1];
			a[i][n-i-1]=temp;
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}