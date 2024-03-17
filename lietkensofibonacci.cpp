#include<stdio.h>

typedef long long ll;

void fibo(ll a[])
{	
	a[0]=0;
	a[1]=1;
	for(int i=2;i<92;i++)
	{
		a[i]=a[i-1]+a[i-2];	
	}
}

void fibonacci(ll n)
{
	ll a[92];
	fibo(a);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	fibonacci(n);
}