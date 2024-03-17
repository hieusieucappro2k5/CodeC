#include<stdio.h>

typedef long long ll;
ll sogiam(ll n)
{	
	ll k=n%10;
	n/=10;
	while(n){
		ll h=n%10;
		if(h<=k) {
			return 0; 
			break;
		}
		k=h;
		n/=10;
	}
	return 1;
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		int cnt=0;
		for(int i=a;i<=b;i++)
		{
			if(sogiam(i)) cnt++;
		}
		printf("%d\n",cnt);
	}	
	
}