#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100],num=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0){
				a[num++]=i;
				n/=i;
			}
		}
	}
	if(n>1) a[num++]=n;
	for(int i=0;i<num;i++){
		printf("%d",a[i]);
		if(i!=num-1) printf("x");
	}
}