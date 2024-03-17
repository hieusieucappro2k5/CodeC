#include<stdio.h>

int giaithua(int n)
{
	int k=1;
	for(int i=1;i<=n;i++) k*=i;
	return k;
}

int strongnumber(int n)
{
	int k=n;
	int sum=0;
	while(n)
	{
		int k=n%10;
		sum+=giaithua(k);
		n/=10;
	}
	return k==sum;
}

int main(){
	int n;
	scanf("%d",&n);
	if(strongnumber(n)) printf("1");
	else printf("0");
}