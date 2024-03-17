#include<stdio.h>
#include<math.h>

typedef long long ll;
ll gt(ll n)
{
	ll ass=1;
	for(int i=1;i<=n;i++){
		ass*=i;
	}
	return ass;
}


int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	ll a=pow(2,k);
	ll b=gt(n);
	if(b%a==0) printf("Yes");
	else printf("No");	
}