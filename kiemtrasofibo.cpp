#include<stdio.h>

typedef long long ll;

ll a[92];
void fibo(ll a[])
{
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=92;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}


int fibonacci(ll n)
{	
	fibo(a);
	for(int i=0;i<=92;i++){
		if(a[i]==n) return 1;
	}
	return 0;
}

int main(){
	ll a[92];	
	fibo(a);
	ll n;
	scanf("%lld",&n);
	if(fibonacci(n)) printf("1");
	else printf("0");
	
}