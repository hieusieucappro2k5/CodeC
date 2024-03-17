#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char a[100];
	char b[100];
	while(scanf("%s",a)!=-1)
	{
		if(strlen(a)>strlen(b))
		{
			strcpy(b,a);
		}
	}
	printf("%s - %d",b,strlen(b));
}