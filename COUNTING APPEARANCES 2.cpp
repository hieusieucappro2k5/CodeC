#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		int a;
		scanf("%d",&a);
		int A[10001];
		for(int i=0;i<a;i++){
		scanf("%d",&A[i]);
		}
		int cnt[10001];
		for(int i =0;i<a;i++){
			cnt[A[i]]++;
		}
		
		printf("Test %d:\n",i);
		for(int i=0;i<a;i++){
			if(cnt[A[i]]){
				printf("%d appears %d times\n",A[i],cnt[A[i]]);
				cnt[A[i]]=0;
			}
		}
		
		
}}               
                 