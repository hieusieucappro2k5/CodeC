#include<stdio.h>
bool sokogiam(long long  n){
 	long long h=n%10;
	n/=10;
	while(n>0){
		long long  k=n%10;
		if(k>h){
			return false; 
		} 
		long long temp=k;
		k=h;
		h=temp;
		n/=10; 
	}  
	return true; 
} 
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(sokogiam(n)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	} 
		
