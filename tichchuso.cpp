#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int kq=1;
	while(n){
		int k=n%10;
		kq*=k;
		n/=10;
	}
	printf("%d\n",kq);
}