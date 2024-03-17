#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int end=n%10;
		int start=0;
		while(n){
			start=n%10;
			n/=10;
		}
		if(start==end) printf("YES\n");
		else printf("NO\n");
	}
}