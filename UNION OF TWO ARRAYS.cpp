#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int A[1000],B[1000],cnt[1000]={0};
	for(int i=1;i<=a;i++){
		scanf("%d",&A[i]);
	}
	for(int i=1;i<=b;i++){
		scanf("%d",&B[i]);
	}
	for(int i=1;i<=a;i++){
		cnt[A[i]]++;
	}
	for(int i=1;i<=b;i++){
		cnt[B[i]]++;
	}
	for(int i=1;i<1000;i++){
		if(cnt[i]!=0){
			printf("%d ",i);
		}
	}
	
	
}

