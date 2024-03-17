#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		int num=0,le=0,chan=0;
		while(scanf("%d",&n)!=1) 
		{	
			if(n<0) return 0;
			num++;
			if(n%2==1) le++;
			else chan++;
		}
		if(num%2==1&&le>chan) printf("YES\n");
		else if(num%2==0&&chan>le) printf("YES\n");
		else if(num%2==1&&le<chan) printf("NO\n");
		else if(num%2==0&&chan<le) printf("NO\n");
	}
	return 0;
}