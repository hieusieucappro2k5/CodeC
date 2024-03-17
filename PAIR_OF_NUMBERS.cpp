#include<stdio.h>
int UCLN(int a,int b) {
	while(b>0){
		int temp=a;
		a=b;
		b=temp%b; 
	} 
	return a; 
}
int main(){
	int test=0;
	scanf("%d",&test);
	while(test--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int k=UCLN(a,b);
		int h=UCLN(c,d);
		if(h==k)
		printf("YES\n");
		else
		printf("NO\n"); 
	} 
} 
