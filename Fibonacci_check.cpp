#include<stdio.h>
void f(long long fibo[]){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<100;i++){
		fibo[i]=fibo[i-1]+fibo[i-2]; 
	} 
}  
long long k(long long n,long long fibo[]){
	for(int i=0;i<100;i++ ){
		if(fibo[i]==n)
		return 1;
	} 
	return 0; 
} 
int main(){
	int test=0;
	scanf("%d",&test);
	while(test--){
		long long n,fibo[100]={};
		scanf("%lld",&n);
		f(fibo);
		if(k(n,fibo))
		printf("YES\n"); 
		else
		printf("NO\n"); 
	} 
} 
