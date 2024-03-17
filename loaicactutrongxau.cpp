#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[1000];
	gets(a);
	char b[1000][1000];
	int num=0;
	char *token1=strtok(a," ");
	while(token1!= NULL){
		strcpy(b[num++],token1);
		token1=strtok(NULL," ");
	}	
	for(int i=0;i<num;i++){
		int k=1;
		for(int j=0;j<i;j++)
		{
			if(strcmp(b[i],b[j])==0) 
			{
				k=0;
				break;
			} 
		}
		if(k) printf("%s ",b[i]);
	}
}