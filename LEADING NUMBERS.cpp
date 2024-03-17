#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long a;
		scanf("%lld",&a);
		long long A[1001];
		for(int i=0;i<a;i++){
			scanf("%lld",&A[i]);
		}
		long long k=0;
		long long cnt[100001]={0};
		for(int i=0;i<a;i++){
			int j=i;
			while(j<a){
				if(A[i]>A[j]){
				 	k=1;
				}
				else if(A[i]==A[j]){
					if(i==j){
						k=1;
					}
					else if(i==a-1) k=1;
					else k=0;
				}
				else if(A[i]<A[j]){
					k=0; 
					break;
				}
				j++;
				}
				
			if(k==1){
				cnt[A[i]]++;
			}
			
		}
		for(int i=100000;i>=0;i--){
			if(cnt[i]){
				printf("%lld ",i);
			}
		}printf("\n");
	}
}