#include<stdio.h>

int giaithua(int n)
{
	int gt=1;
	for(int i=1;i<=n;i++) gt*=i;
	return gt;
}

int numberstrong(int n)
{
	int sum=0;
	int k=n;
	while(k){
		int h=k%10;
		sum+=giaithua(h);
		k/=10;
	}
	return sum==n;
}

int main(){
	int t=145,k;
//	if(numberstrong(t)) printf("hieu dep trai");
	scanf("%d%d",&t,&k);
	if(t>k) {
		int temp=t;
		t=k;
		k=temp;
	}
	for(int i=t;i<=k;i++) if(numberstrong(i)) printf("%d ",i);
}