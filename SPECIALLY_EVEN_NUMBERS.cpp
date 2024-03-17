#include<stdio.h>
long long sochan(long long n){
	long long m; 
	while(n>0){
		m=n%10;
		if(m%2==1){
			 return 0; 
		} 
		n/=10; 
	} 
	return 1; 
} 
int main(){
	int test=0;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(sochan(n))
		printf("YES\n");
		else
		printf("NO\n"); 
	} 
	return 0; 
} 
