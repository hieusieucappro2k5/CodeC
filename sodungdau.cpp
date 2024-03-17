#include<stdio.h>
#include<stdlib.h>

int cmp(void const *a,void const *b)
{
	int x=*(int*)a;
	int y=*(int*)b;
	return y-x;
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int a[n];
		int b[1000],num=0;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n-1;i++){
			int k=1;
			for(int j=n-1;j>i;j--){
				if(a[i]<=a[j]) k=0;
			}
			if(k) b[num++]=a[i];
		}
		b[num++]=a[n-1];
		qsort(b,num,sizeof(int),cmp);
		for(int i=0;i<num;i++) printf("%d ",b[i]);
		printf("\n");
	}
}