#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int cnt[10000]={0},num=0;
	for(int i=0;i<n;i++) cnt[a[i]]++;	
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==1) num++;
	}
	printf("%d\n",num);
	for(int i=0;i<n;i++)
	{
		if(cnt[a[i]]==1) printf("%d ",a[i]); 
	}

}