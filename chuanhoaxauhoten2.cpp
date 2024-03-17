#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void to_upper(char a[]){
	int l=strlen(a);
	for(int i=0;i<l;i++){
		a[i]=toupper(a[i]);
	}
}
int main(){
	int test;
	scanf("%d",&test);
	getchar();
	while(test--){
		char a[50];
		gets(a);
		char b[20][50];
		int num=0;
		char *token=strtok(a," ");
		while(token!=NULL){
			strcpy(b[num++],token);
			token=strtok(NULL," ");
		}	
		for(int i=0;i<num;i++){	
			if(b[i][0]>='a'&&b[i][0]<='z') b[i][0]-=32;
			for(int j=1;j<strlen(b[i]);j++){
				if(b[i][j]>='A'&&b[i][j]<='Z') (b[i][j])+=32;
			}}
		for(int i=1;i<num;i++){
			if(i!=num-1) printf("%s ",b[i]);
			else printf("%s,",b[i]);
		}
		to_upper(b[0]);
		printf(" %s\n",b[0]);
	}
}