#include<stdio.h>

int fali(int n)
{
	int k=n;
	int h=0;
	while(k)
	{
		int l=k%10;
		h=h*10+l;
		k/=10;
	}
	return h==n;
}

int digit9(int n)
{
	while(n)
	{
		int k=n%10;
		if(k==9) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int a;
	scanf("%d",&a);
	int cnt=0;
	for(int i=2;i<a;i++)
	{
		if(fali(i)&&digit9(i))
		{
			cnt++;
		 	 printf("%d ",i);
		}
	}
	printf("\n");
	printf("%d",cnt);
	
	
}