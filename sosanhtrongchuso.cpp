#include<stdio.h>

int sumdigit(int n){
	int sum=0;
	while(n)
	{
		int k=n%10;
		sum+=k;
		n/=10;
	}
	return sum;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int l=sumdigit(a);
	int r=sumdigit(b);
	if(l>r) printf("%d %d",b,a);
	else if(l==r) printf("%d %d",a,b);
	else printf("%d %d",a,b);
}