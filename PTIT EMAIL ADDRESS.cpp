#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
	char a[51];
	fgets(a,50,stdin);
//	gets(a);
	for(int i=0;i<strlen(a);i++){
		a[i]=tolower(a[i]);
	}
	char *token=strtok(a," ");
	char b[51][51];
	int num=0;
	while(token!=NULL){
		strcpy(b[num++],token);
		token=strtok(NULL," ");
	}
	char c[51];
	for(int i=0;i<num;i++){
		if(i!=num-1)
			printf("%c",b[i][0]);
		else{
			for(int j=0;j<51;j++){
				if(b[i][j]!='\n') printf("%c",b[i][j]);
				else break;
			}
//			printf("%s",b[i]);
		}
		}
		printf("@ptit.edu.vn");
	return 0;
}