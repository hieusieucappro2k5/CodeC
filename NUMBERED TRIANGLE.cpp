#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int A[100];
	int k=0;
	for(int i=1;i<=n;i++){
		if(i%2==1){	
			k+=i;
			for(int j=0;j<i;j++){
				printf("%d ",k);
				k++;
				}
			}
		if (i%2==0){
			k+=i-1;
			for(int j=0;j<i;j++){
				printf("%d ",k);
				k--;
			}
		}
		printf("\n");
	}
}