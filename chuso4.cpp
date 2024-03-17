#include<stdio.h>
#include<math.h>

int sodoixung(int n)
{
	int k=n;
	int h=0;
	while(k){
		int l=k%10;
		h=h*10+l;
		k/=10;
	}
	return n==h;
}

int sumdigit(int n){
	int sum=0;
	while(n){
		int k=n%10;
		if(k==4){
			return 0;
			break;
		}
		sum+=k;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int l=pow(10,n-1),r=pow(10,n);
		for(int i=l;i<=r;i++){
			if(sumdigit(i)&&sodoixung(i)) printf("%d ",i);
		}		
		printf("\n");
	}
}