#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int tich[20],num=0;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{	
				tich[num++]=i;
				while(n%i==0)
				{
					n/=i;
				}
			}
		}
		if(n>1) tich[num++]=n;
		int kq=1;
		for(int i=0;i<num;i++)
		{
			kq*=tich[i];
		}
		printf("%d\n",kq);
	}
}