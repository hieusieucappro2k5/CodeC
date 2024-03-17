#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int doixung(char a[])
{	
	int k=strlen(a);
	for(int i=0,j=k-1;i<j;i++,j--){
		if(a[i]=='(') 
		{
			if(a[j]!=')') return 0; break;
		}
		if(a[i]=='"'){
			if(a[j]!='"') return 0; break;
		}
		if(a[i]=='{')
		{
			if(a[j]!='}') return 0; break;
		}
		if(a[i]=='[')
		{
			if(a[j]!=']') return 0; break;
		}
	}
	return 1;
}

int main(){
	char a[1000];
	gets(a);
	if(doixung(a)) printf("1");
	else printf("0");
}