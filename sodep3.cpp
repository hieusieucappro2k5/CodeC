#include<stdio.h>
#define ll long long

ll pali(ll n)
{
	ll h=0;
	ll k=n;
	while(k)
	{
		ll l=k%10;
		h=h*10+l;
		k/=10;
	}
	return h==n;
}

ll sodep(ll n)
{
	ll sum=0;
	ll l=0;
	while(n)
	{
		ll k=n%10;
		if(k==6) l=1;
		sum+=k;
		n/=10;
	}
	if(l) 
	{
		if(sum%10==8||sum%10==-8) return 1;
		else return 0;
	}
	else return 0;
}

int main(){
	ll a,b;
	scanf("%lld%lld",&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(ll i=a;i<=b;i++)
	{
		if(sodep(i)&&pali(i)) printf("%lld ",i);
	}
	return 0;
}