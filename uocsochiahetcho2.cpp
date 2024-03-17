#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int cnt=0;
		if(n%2==0) cnt++;
		for(int i=2;i*i<=n;i++)
		{	
			if(n%i==0){
				if(i%2==0) cnt++;
				if(n/i!=i&&(n/i)%2==0) cnt++;
			}
		}		
		printf("%d\n",cnt);
	}
}