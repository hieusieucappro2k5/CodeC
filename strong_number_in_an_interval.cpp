#include<stdio.h>
int somanh(int n){
	int h=n; 
	int sum=0; 
	while(n>0){
		int k=n%10;
		int gt=1; 
		for(int i=1;i<=k;i++){
			gt*=i; 
		} 
		sum+=gt;
		n/=10; 
	} 
	return h==sum; 
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
		if(somanh(i)){
			printf("%d ",i); 
		} 
	} 
} 
