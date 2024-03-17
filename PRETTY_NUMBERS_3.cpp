#include<stdio.h>
int so6(int n){
	while(n){
		int k=n%10;
		if(k==6) return 1;
		n/=10;
	}
	return 0;
} 
int palin(int n){
	int h=0;
	int k=n;
	while(k){
		h=h*10+k%10;
		k/=10;
	}
	return h==n;
}
int chia8(int n){
	int sum=0;
	while(n){
		int k=n%10;
		sum+=k;
		n/=10;
	}
	if(sum==8||sum==18||sum==28||sum==38||sum==48||sum==58||sum==68||sum==78||sum==88||sum==98) return 1;
	else return 0;
} 
int main (){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(chia8(i)&&so6(i)&&palin(i)) printf("%d ",i);
	}
}
