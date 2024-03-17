#include<stdio.h>
#include<math.h> 
int sokhonggiam(int n){
	int socuoi=n%10;
	n/=10;
	while(n>0){
		int sotiep=n%10;
		int temp=sotiep; 
		if(sotiep>socuoi){
		return 0;}
		n/=10; 
	 	socuoi=temp; 
	} 
	return 1; 
} 
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int l=pow(10,n-1);
		int r=pow(10,n);
		for(int i=l;i<r;i++ ){
			if(sokhonggiam(i))
			printf("%d ",i); 
		}  printf("\n"); 
	} 
} 
