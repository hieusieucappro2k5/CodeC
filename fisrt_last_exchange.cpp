#include<stdio.h>
#include<math.h> 
int main(){
	int  n;
	scanf("%d",&n);
	int socuoi=n%10; 
	int sodau;
	int kq=n; 
	int count=0; 
	while(n>0){
		sodau=n%10;
		n/=10; 
		count++; 
	} 
	int temp=kq-sodau*pow(10,count-1)+socuoi*pow(10,count-1)-socuoi+sodau; 
	printf("%d",temp); 
	
} 
