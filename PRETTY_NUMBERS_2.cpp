#include<stdio.h>
#include<math.h>
int dx(int n){
	int k=0;
	int h=n;
	while(h){
		k=k*10+h%10;
		h/=10;
	}
	return k==n;
}
int chuso(int n){
	int sum=0;
	while(n){
		int k=n%10;
		sum+=k;
		n/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int l=pow(10,n-1);
		int r=pow(10,n);
		int cnt=0;
		for(int i=l;i<=r;i++){
			if(chuso(i)&&dx(i)){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
