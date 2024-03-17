#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		int n=0;
		scanf("%d",&n);
		int cnt=0;
		for(int i=1;i*i<=n/2;i++){
			if((n/2)%i==0){
				cnt++; 
				int j=(n/2)/i;
				if(i!=j){
				cnt++;}
			} 
		}
		if(n%2!=0){
			printf("0\n"); 
		} 
		else{
			printf("%d\n",cnt); 
		} 
	} 
} 
