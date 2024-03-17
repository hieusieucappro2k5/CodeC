#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char pretty1(char *A){
	if(A[strlen(A)-1]=='8') return 1;
	else return 0;
}
char pretty2(char n[]){
	int sum=0;
	for(int i=0;i<strlen(n);i++){
		sum+=n[i]-'0';
	}
	if(sum%10==0) return 1;
	else return 0;
}
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char A[500];
		gets(A);
		pretty2(A);
		if(pretty1(A)&&pretty2(A)) printf("YES\n");
		else printf("NO\n");
	}
}