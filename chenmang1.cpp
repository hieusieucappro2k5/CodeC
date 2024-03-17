#include<stdio.h>

void print(int a[],int n)
{
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100],b[100];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int k=0;
	scanf("%d",&k);
	print(a,k);
	print(b,m);
	for(int i=k;i<n;i++) printf("%d ",a[i]);
}