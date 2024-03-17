#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[200];
		fgets(a,200,stdin);
		int cnt=0;
		char *token=strtok(a," \n");
		while(token!=NULL)
		{
			cnt++;
			token=strtok(NULL," \n");
		}
		printf("%d\n",cnt);
	}
}