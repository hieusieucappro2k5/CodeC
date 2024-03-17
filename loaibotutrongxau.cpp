#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[1000];
	gets(a);
	char c[1000];
	gets(c);
	char d[1000][1000];
	int cnt=0;
	char *token2=strtok(c," ");
	while(token2!=NULL){
		strcpy(d[cnt++],token2);
		token2=strtok(NULL," ");
	}
	char b[1000][1000];
	int num=0;
	char *token1=strtok(a," ");
	while(token1!= NULL){
		strcpy(b[num++],token1);
		token1=strtok(NULL," ");
	}	
	for(int i=0;i<num;i++){
		for(int j=0;j<cnt;j++)
			if(strcmp(b[i],d[j])!=0) 
			printf("%s ",b[i]); 
	}
}