#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int ok=i;
		for(int j=1;j<=m;j++){
			if(j<=m-i+1)
			printf("%d",ok);
			ok++;
		}
		int k=m-1;
		if(i<=m)	
		{		
		for(int j=n;j<n+i-1;j++){
			printf("%d",k);
			k--;
		}
		}
		else {
			int h=i;
			for(int j=1;j<=m;j++){
				printf("%d",h);
				h--;
			}
		}
		printf("\n");	
		}
}