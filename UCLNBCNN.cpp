#include<stdio.h>

typedef long long ll;
ll GCD(ll a,ll b)
{
	if(a==0||b==0) return a+b;
	return GCD(b,a%b);
}

ll LCM(ll a,ll b){
	return a/GCD(a,b)*b;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		ll a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",LCM(a,b),GCD(a,b));
	}
}