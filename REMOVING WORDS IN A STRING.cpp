#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char A[101],B[101];
	gets(A);
	gets(B);
	char C[101][101];
	int n=0;
	char *b=strtok(B," ");
	char *a=strtok(A," ");
	while(a!=NULL){
		strcpy(C[n],a);
		n++;
		a=strtok(NULL," ");
	} 
	
	for(int i=0;i<n;i++){
		if(strcmp(C[i], b)!=0) 
			printf("%s ",C[i]);
	}
}