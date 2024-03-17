#include<stdio.h>

int nt(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	int i=2;
	while(cnt<n){
		if(nt(i)){
			cnt++;
			printf("%d\n",i);
		}
		i++;
	}
}