#include<stdio.h>
#include<math.h>

int decreasing(int n)
{
	int r=n%10;
	n/=10;
	while(n)
	{
		int l=n%10;
		if(l>r) return 0;
		n/=10;
		r=l;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int l=pow(10,n-1);
		int r=pow(10,n);
		for(int i=l;i<r;i++)
		{
			if(decreasing(i)) printf("%d ",i);
		}
		printf("\n");
	}
}