#include<stdio.h>

int tien[10]={1,2,5,10,20,50,100,200,500,1000};

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int cnt=0;
		for(int i=9;i>=0;i--)	
		{
			int k=n/tien[i];
			if(k) 
			{
				cnt+=k;
				n=n%tien[i];
			}
		}
		printf("%d\n",cnt);
	}
}