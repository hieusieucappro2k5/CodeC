#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char A[201];
		gets(A);
		char *token=strtok(A, " ");
		int cnt=0;
		while(token != NULL){
			cnt++;
			 token = strtok(NULL, " ");
		}
		printf("%d\n",cnt);
	}
}