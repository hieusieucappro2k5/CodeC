#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[9];
	scanf("%s",a);
	int temp=a[0];
	a[0]=a[strlen(a)-1];
	a[strlen(a)-1]=temp;
	long long k=atoll(a);
	printf("%lld",k);
}