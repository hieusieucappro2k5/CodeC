#include<stdio.h>

int dx(int a[],int n){
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]!=a[j]) return 0;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int a[100];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		if(dx(a,n)) printf("YES\n");
		else printf("NO\n");
	}
}