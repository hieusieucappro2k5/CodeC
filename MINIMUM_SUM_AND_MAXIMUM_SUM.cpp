#include<stdio.h>
#include<math.h>
long long max(long long n){
	long long h=0;
	long long cnt=0;
	while(n>0){
		long long k=n%10;
		cnt++;
		if(k==5) k=6;
		h=k*pow(10,cnt-1)+h;
		n/=10;
	}
	return h;	
}
long long min(long long n){
	long long h=0;
	long long cnt=0; 
	while(n>0){
		long long k=n%10;
		cnt++;
		if(k==6) k=5;
		h=k*pow(10,cnt-1)+h;
		n/=10;
	}
	return h;
}
int main(){ 
	int test;
	scanf("%d",&test);
	while(test--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld",min(a)+min(b),max(a)+max(b));
		printf("\n");
	}
	return 0;
}
