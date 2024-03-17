#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		int k=1;
		for(int i=0,j=n-1;i<j;i++,j--)
		{
			if(a[i]!=a[j])
			{
				k=0;
				break;
			}
		}
		if(k) printf("YES\n");
		else printf("NO\n");
		
	}
}