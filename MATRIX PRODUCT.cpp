#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d[a][b],e[b][c];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&e[i][j]);
		}
	}	
	int kq[a][c];
	for(int i=0;i<a;i++){
		for(int j=0;j<c;j++){
			kq[i][j]=0;
			for(int k=0;k<b;k++){
				kq[i][j] += d[i][k] * e[k][j];
			}
	}	
	}
	for(int i=0;i<a;i++){
			for(int j=0;j<c;j++){
				printf("%d ",kq[i][j]);
			}
			printf("\n");
		}
}