#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];	
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	int cnt[1000]={0},check[1000]={0};
	for(int i=0;i<n;i++) cnt[a[i]]++;
	for(int i=0;i<m;i++) if(cnt[b[i]]) check[b[i]]=1;
	for(int i=0;i<1000;i++) 
	{
		if(check[i]==1) 
		{
			printf("%d ",i);
		}
	}
}