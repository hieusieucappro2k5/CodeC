#include<stdio.h>

int gcd(int a,int b)
{
	if(a==0||b==0) return a+b;
	return gcd(b,a%b);
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		for(int j=i;j<=m;j++){
			if(gcd(i,j)==1)
			printf("(%d,%d)\n",i,j);
		}
//		printf("\n");
	}
}