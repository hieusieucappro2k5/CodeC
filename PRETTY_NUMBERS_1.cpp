#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int fibo(int n){
	if(n==0){
		return 1;
	}
	int a=0,b=1;
	while(b<n){
		int temp=b;
		b=b+a;
		a=temp;
	} 
	return b==n;
} 
int tongcs(int n){
	int sum=0;
	while(n){
		int k=n%10;
		sum+=k;
		n/=10;
	}
	if(fibo(sum)) return 1;
	else return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(nt(i)&&tongcs(i)) printf("%d ",i);
	}
}
