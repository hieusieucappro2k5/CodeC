#include<stdio.h>
#include<math.h>
int palin(int n){
	int k=0;
	int h=n;
	while(h){
		k=k*10+h%10;
		h/=10;
	}
	return k==n;
} 
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;}
	}
	return n>1;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if (nt(i)&&palin(i)){
				printf("%d ",i);
				cnt++;
				if(cnt%10==0){
				printf("\n");
			}
			}
			
		}
		printf("\n");
	}
}
