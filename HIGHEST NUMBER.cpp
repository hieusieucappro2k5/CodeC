#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int a;
		scanf("%d",&a);
		int A[100];
		for(int i=1;i<=a;i++){
			scanf("%d",&A[i]);
		}
		int max=-1e9-1;
		int cnt=0;
		for(int i=1;i<=a;i++){
			if(max<A[i]){
				max=A[i];
			}
		}
		printf("%d\n",max);
		for(int i=1;i<=a;i++){
			if(A[i]==max) printf("%d ",i-1);
		}printf("\n");
		
		
	}
}
