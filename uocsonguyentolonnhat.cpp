#include<stdio.h>
#include<math.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int mang[100],num=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0){
				while(n%i==0){
					n/=i;
				}
				mang[num++]=i;
			}
		}
		if(n>1) mang[num++]=n;
		printf("%d\n",mang[num-1]);
	}
}