#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		int n;
		scanf("%d",&n);
		int fibo[92];
		fibo[0]=0;
		fibo[1]=1;
		for(int i=2;i<92;i++){
			fibo[i]=fibo[i-1]+fibo[i-2];
		}
		printf("%d\n",fibo[n]);
	}
}