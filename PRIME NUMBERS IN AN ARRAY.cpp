#include<stdio.h>
#include<math.h>
long long prime(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long a,A[101];
		scanf("%lld",&a);
		for(int i=1;i<=a;i++){
			scanf("%lld",&A[i]);
		}
		
		for(int i=1;i<=a;i++){
			if(prime(A[i])){
			printf("%lld ",A[i]);
			}
		}
		printf("\n");
	}
}
