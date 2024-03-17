#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int cmp(void const *a,void const *b)
{
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}

int main(){
	char a[1000];
	gets(a);
	char b[1000];
	gets(b);
	char c[20][50],d[20][50];
	int num1=0,num2=0;
	char *token1=strtok(a," ");
	while(token1!=NULL)
	{
		strcpy(c[num1++],token1);
		token1=strtok(NULL," ");
	}
	char *token2=strtok(b," ");
	while(token2!=NULL)
	{
		strcpy(d[num2++],token2);
		token2=strtok(NULL," ");
	}
	char kq[20][50];
	int num3=0;
	for (int i=0;i<num1;i++){
		int ok=1;
		for(int j=0;j<num2;j++){
			if(strcmp(c[i],d[j])==0) {
				ok=0;
				break;
				}
			}
			if(ok) strcpy(kq[num3++],c[i]);
		}
	qsort(kq,num3,sizeof(char[50]),cmp);
	for(int i=0;i<num3;i++){
		int ok=1;
		for(int j=0;j<i;j++){
			if(strcmp(kq[i],kq[j])==0) ok=0;
		}
		if(ok) printf("%s ",kq[i]);
	}
	
}