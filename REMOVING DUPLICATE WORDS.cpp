#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char A[101];
	gets(A);
	char B[101][101];
	int n=0;
	char *token=strtok(A," ");
	while(token != NULL){
		int flag=1;
		for(int i=0;i<n;i++){
			if(strcmp(token,B[i])==0){
				flag=0;
				
			}
		}
		if(flag){
			strcpy(B[n],token);
			n++;
		}
		
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		printf("%s ",B[i]);
	}
	
}