#include<stdio.h>

void swap(int a[][20],int b,int c,int n)
{
	for(int i=0;i<n;i++){
		int  temp=a[i][b];
		a[i][b]=a[i][c];
		a[i][c]=temp;
	}	
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[20][20];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	int b,c;
	scanf("%d%d",&b,&c);
	swap(a,b-1,c-1,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}