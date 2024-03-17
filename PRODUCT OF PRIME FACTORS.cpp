#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int rev=1;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				rev*=i;
				while(n%i==0)
				{
					n/=i;
				}
			}
		}
		if(n>1) rev*=n;
		printf("%d\n",rev);
	}
}