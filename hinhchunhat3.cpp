//#include <stdio.h>
//
//int main(){
//	int n, m;
//	scanf ("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++){
//		int A = i, B = 2;
//		if (A == 1){
//			for (int j = 1; j <= m; j++){
//				printf ("%d", A);
//				A++;
//			}
//			printf ("\n");
//			continue;
//		} else {
//			int ok = 1;
//			for (int j = 1; j <= m; j++){
//				if (ok){
//					if (A == 1){
//						ok = 0;
//					}
//					printf ("%d", A);
//					A--;
//				} else {
//					printf ("%d", B);
//					B++;
//				}
//			}
//		}
//		printf ("\n");
//	}
//}
#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int ok=i;
		for(int j=1;j<=m;j++){
			if(j<=i)
			printf("%d",ok);
			
			ok--;
		}
		int k=2;
		if(i<m){
		for(int j=i;j<=m-1;j++){
//			if(i>n)
			printf("%d",k);
			k++;
		}}
		printf("\n");	
		}
}