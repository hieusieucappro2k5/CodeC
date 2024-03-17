#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long long min(char n[])
{
	int k=strlen(n);
	for(int i=0;i<k;i++){
		if(n[i]=='6') 
		n[i]='5';
	}
	return atoll(n);
}

long long max(char n[])
{
	for(int i=0;i<strlen(n);i++){
		if(n[i]=='5') 
		n[i]='6';
	}
	return atoll(n);
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char n[18],m[18];
		scanf("%s",n);
		scanf("%s",m);
		long long kq1=min(n)+min(m);
		long long kq2=max(n)+max(m);
		printf("%lld %lld",kq1,kq2);
		printf("\n");
		
		
	}
}