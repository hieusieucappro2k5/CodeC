#include<stdio.h>
#define ll long long

void fibo(ll a[])
{
	a[0]=0;
	a[1]=1;
	for(int i=2;i<92;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}

int check(ll n)
{
	ll a[92];
	fibo(a);
	for(int i=0;i<92;i++){
		if(a[i]==n) return 1;
	}	
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}