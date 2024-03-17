#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int sum=0;
		while(n){
			int k=n%10;
			sum+=k;
			n/=10;
		}
		printf("%d",sum);
	}
}