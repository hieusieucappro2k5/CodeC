#include<stdio.h>
#define ll long long 

int prime(int n){
	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
	return n>1;
}

int main(){
	ll n;
	scanf("%lld",&n);
	int a[10],num=0;
	while(n){
		int k=n%10;
		a[num++]=k;
		n/=10;
	}
	int cnt[10]={0};
	for(int i=0;i<num;i++){
		if(prime(a[i])) cnt[a[i]]++;
	}
	for(int i=num-1;i>=0;i--){
		if(cnt[a[i]]){
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]]=0;
		}
	}
	
}