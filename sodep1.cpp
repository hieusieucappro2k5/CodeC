#include<stdio.h>
#include<math.h>

int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++) 
		if(n%i==0) 
			return 0;
	return n>1;
}

void fibo(int a[])
{
	a[0]=0;
	a[1]=1;
	for(int i=2;i<92;i++)
		a[i]=a[i-1]+a[i-2];
}

int sumdigit(int n)
{	
	int sum=0;
	while(n){
		int k=n%10;
		sum+=k;
		n/=10;
	}
	int a[92];
	fibo(a);
	for(int i=0;i<92;i++)
		if(a[i]==sum) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++) 
		if(sumdigit(i)&&prime(i)) 
			printf("%d ",i);
}