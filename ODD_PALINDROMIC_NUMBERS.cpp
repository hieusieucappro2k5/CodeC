#include<stdio.h>
int palindrom(long long n){
	long long m=0;
	long long h=n;
	while(n>0){
		long long k=n%10;
		m=m*10+k;
		n/=10;
	}
	return h=m;
}
int sole(long long n){
	while(n>0){
	long long k=n%10;
		if(k%2==0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int tong(long long n){
	long long sum=0;
	while(n>0){
		long long k=n%10;
		sum+=k;
		n/=10;
	}
	if(sum%2==1){
	return 1;}
	return 0;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(palindrom(n)&&sole(n)&&tong(n)){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
}
