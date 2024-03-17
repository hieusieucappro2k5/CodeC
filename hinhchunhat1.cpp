#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		if(n<=m)
		{
			for(int j=i;j<=m;j++) printf("%d",j);
			for(int j=i-1;j>0;j--) printf("%d",j);
		}
		else {
			if(i<=m){
				for(int j=i;j<=m;j++) printf("%d",j);
				for(int j=i-1;j>0;j--) printf("%d",j);
			
		}
			else {
				int a=m-1;	
				printf("%d",i);
					for(int j=i+1;j<=m;j++) printf("%d",j);
					for(int j=2;j<=m;j++) {
						printf("%d",a);
						a--;
					}
			}
		}printf("\n");
	}
}
//#include <stdio.h>
//
//int main(){
//	int n, m;
//	scanf ("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++){
//		int A = i, B = i;
//		if (A <= m){
//			for (int j = 1; j <= m; j++){
//				if (B <= m){
//					printf ("%d", B);
//					B++;
//				} else {
//					A--;
//					printf ("%d", A);
//				}
//			}
//		} else {
//			printf ("%d", i);
//			A = m - 1;
//			for (int j = 2; j <= m; j++){
//				printf ("%d", A);
//				A--;
//			}
//		}
//		printf ("\n");
//	}
//}