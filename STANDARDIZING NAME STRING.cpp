#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char A[100];
		gets(A);
		char B[100][100];
		int n=0;
		char *token=strtok(A," ");
		while(token!=NULL){
			strcpy(B[n],token);
			n++;
			token=strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<strlen(B[i]);j++)
			if(B[i][j]>='A'&&B[i][j]<='Z'){
				B[i][j]+=32;
			}
		}
		for(int i=0;i<n;i++){
			if(B[i][0]>='a'&&B[i][0]<='z')
				B[i][0]-=32;
		}
		for(int i=0;i<n;i++){
			printf("%s ",B[i]);
		}
		printf("\n");
	}
}