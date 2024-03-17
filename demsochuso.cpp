#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	while(n){
		n/=10;
		cnt++;
	}
	printf("%d\n",cnt);
}