#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	char b[50][20];
	int num=0;
	char *token=strtok(a," ");
	while(token!=NULL)
	{
		strcpy(b[num++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<num;i++)
	{
		int cnt=1,ok=1;
		for(int j=i+1;j<num;j++)
		{
			if(strcmp(b[i],b[j])==0) cnt++;
		}
		for(int j=i-1;j>=0;j--){
			if(strcmp(b[i],b[j])==0){
				ok=0;
				break; 	
			} 
		}
		if(ok) printf("%s %d\n",b[i],cnt);
		
	}
	
	
}