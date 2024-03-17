#include<stdio.h>
long long souuthe(long long n){
	long long k=n%10;
	long long cnt1=0,cnt2=0;
	if(k%2!=0) return 0;
	else
	while(n>0){
		if(k%2==0){
			cnt1++;
		}
		else{
			cnt2++;
		}
		n/=10;
		k=n%10;
	}
	if(cnt1>cnt2) return 1;
	else return 0;
} 
int main (){
	int test;
	scanf("%d",&test);
	while(test--){
		long long n;
		scanf("%lld",&n);
		if(souuthe(n)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
