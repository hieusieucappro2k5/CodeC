#include<stdio.h>
#include<math.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int r=n;
		int number[1000]={0},digit[1000]={0};
		int cnt=0,m=0,l=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				number[m++]=i;
				while(n%i==0)
				{	
					cnt++;
					n/=i;
				}
				digit[l++]=cnt;
				cnt=0;
			}
			
		}
		if(n>1)
		{
			number[m++]=n;
			digit[l++]=1;
		}
		printf("%d = ",r);
		for(int i=0;i<m;i++)
		{
			printf("%d^%d",number[i],digit[i]);
			if(i!=m-1) printf(" * ");
		}
		printf("\n");
	}
}