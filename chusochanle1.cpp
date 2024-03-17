#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cnt1=0,cnt2=0;
	while(n){
		int k=n%10;
		if(k%2==1) cnt1++;
		else cnt2++;
		n/=10;
	}
	printf("%d %d",cnt1,cnt2);
}