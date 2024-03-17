#include<stdio.h>
int slove(long long n){
	long long res;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n!=1)
	res=n;
	return res;
}
int main(){
	int test;
	scanf("%d",&test);
	if(test>=1&&test<=100) 
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(n>=2&&n<=1e10) 
		printf("%d\n",slove(n));
	}
}
