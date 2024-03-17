#include<stdio.h>
#define ll long long

ll lcm(ll a,ll b)
{
	if(a==0||b==0) return a+b;
	return lcm(b,a%b);
}

ll gcd(ll a,ll b){
	return a/lcm(a,b)*b;
}

int main(){
	ll a,b;
	scanf("%lld%lld",&a,&b);
	if(a==0&&b==0) return 0;
	printf("%lld\n%lld",lcm(a,b),gcd(a,b));
}