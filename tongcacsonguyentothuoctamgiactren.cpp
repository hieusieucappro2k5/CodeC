#include<stdio.h>

int prime(int n)
{
	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
	return n>1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[50][50];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
	int sum=0;
	for(int i=n-1;i>=0;i--)
	{	
		int k=n-i-1;
		for(int j=n-i-1;j<n;j++)
		{	
			if(prime(a[k][j])) sum+=a[k][j];
		}
	}
	printf("%d",sum);
}