#include<stdio.h>
#include<math.h>

int hoanhao(int  n)
{
	int sum=1;
	if(n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) 
		{
			sum+=i;
			if(i!=n/i) 
				sum+=n/i;
		}
	}
	return sum==n;
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
	for(int i=a;i<=b;i++) if(hoanhao(i)) printf("%d ",i);
}