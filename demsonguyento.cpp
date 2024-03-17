#include<stdio.h>
#include<math.h>

int nt(int n)
{
	for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
	return n>1;
}

int digit(int n){
	while(n){
		int k=n%10;
		if(!nt(k)) 
		return 0;
		n/=10; 
	}
	return 1;
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for(int i=a;i<b;i++) if(nt(i)&&digit(i)) ++cnt;
		printf("%d\n",cnt);
	}
}