#include<stdio.h>

void scan(int a[],int n)
{
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}

int main(){
	int test;
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int a[100],b[100];
		scan(a,n);
		scan(b,m);
		printf("Test %d:\n",i);
		print(a,k);
		print(b,m);
		for(int i=k;i<n;i++) printf("%d ",a[i]);
		printf("\n");
		
	}
}