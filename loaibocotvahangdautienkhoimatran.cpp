#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		int m,n;
		scanf("%d%d",&n,&m);
		int a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",i);
		for(int i=1;i<m;i++){
			for(int j=1;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}