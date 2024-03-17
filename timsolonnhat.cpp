#include<stdio.h>

int main(){
	long long x,max=-1e9;
	while(scanf("%lld",&x)!=-1)
		if(x>max) 
			max=x;
	printf("%lld",max);
}