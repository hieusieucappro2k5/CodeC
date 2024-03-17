#include<stdio.h>

void fibo(long long arr[],int n){
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long a[92];
		fibo(a,n);
		printf("%lld\n",a[n]);
	}
}