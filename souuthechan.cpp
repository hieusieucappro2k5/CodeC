#include<stdio.h>

typedef long long ll;

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		ll n;
		scanf("%lld",&n);
		int le=0,chan=0;
		while(n){
			int k=n%10;
			if(k%2) le++;
			else chan++;
			n/=10; 
		}
		if(le>chan) printf("YES\n");
		else printf("NO\n");
		
	}
}