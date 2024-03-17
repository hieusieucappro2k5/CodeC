#include<stdio.h>
#include<math.h>
int songuyento(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int tungchuso(int n){
	while(n>0){
		int k=n%10;
		if(k!=2&&k!=3&&k!=5&&k!=7)
		return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		int d=0;
		int cnt=0;
		for(int j=a;j<=b;j++){
			if(songuyento(j)&&tungchuso(j)){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
