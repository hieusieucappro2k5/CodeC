#include<stdio.h>
#include<stdlib.h>

int cmp1(const void *a,const void *b){
	int x=*(int*)a;
	int y=*(int*)b;
	return x-y;
}

int cmp2(const void *a,const void *b){
	int x=*(int*)a;
	int y=*(int*)b;
	return y-x;
}

int main(){
	int test;
	scanf("%d",&test);
//	while(test--)
	for(int i=1;i<=test;i++)
	{
		int n;
		scanf("%d",&n);
		int a[100],b[100];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp1);
		qsort(b,n,sizeof(int),cmp2);
		printf("Test %d:\n",i);
		for(int i=1;i<=n;i++){
			for(int j=i-1;j<i;j++){
				printf("%d ",a[j]);
			}
			for(int k=i-1;k<i;k++){
				printf("%d ",b[k]);
			}
		}
		printf("\n");
	}
}