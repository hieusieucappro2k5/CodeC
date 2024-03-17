#include<stdio.h>
#include<math.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int k=sqrt(n);
		if(k*k==n) printf("YES");
		else printf("NO");
		printf("\n");
	}
}