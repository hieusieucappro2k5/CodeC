#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int x1,x2,y1,y2;
		scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
		int k=x1-y1;
		int h=x2-y2;
		if(k==h) printf("YES\n");
		else printf("NO\n");
		
	}
}