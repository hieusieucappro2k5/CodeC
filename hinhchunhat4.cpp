#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		if(n<=m)
		{
		int num1=m-i+1;
		for(int j=1;j<=m;j++){
			if(j>=i) {
			printf("%d",num1);
			num1--;}
		}
		int num=2;
		for(int j=1;j<i;j++){
			printf("%d",num);
			num++;
		}
		printf("\n");
		}
		else
		{
			if(i<=n-m)
			{	
				int k=n-i+1;
				for(int i=1;i<=m;i++){
					printf("%d",k);
					k--;
				}
			}
			else{
				printf("%d",n-i+1);
				int num1=n-i;
				int num2=2;
				for(int j=1;j<m;j++){
					if(j<n-i+1) {
					printf("%d",num1--);

					}
					
					else {
						printf("%d",num2++);
					}
				}		
			}
			printf("\n");
		} 
	}
}