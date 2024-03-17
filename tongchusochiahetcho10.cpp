#include<stdio.h>

int sumdigit(int n)
{	
	int sum=0;
	while(n)
	{
		int k=n%10;
		sum+=k;
		n/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		if(sumdigit(n)) printf("YES\n");
		else printf("NO\n");
	}
}