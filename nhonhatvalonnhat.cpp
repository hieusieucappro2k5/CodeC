#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	int*x=(int*)a;
	int*y=(int*)b;
	return *x-*y;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmp);
//	printf("%d %d",a[0],a[1]);
	int min1=1e9,min2=1e9;
	int num=0,b[n], B = 0;
	for(int i=0;i<n;i++){
		int ok = 1;
		for(int j=i - 1;j>=0;j--){
			if(a[i]==a[j]){
				ok = 0;
				break;
			}
		}
		if(ok){
			b[B] = a[i];
			B++;
		}
	}
	printf("%d %d",b[0],b[1]);
//	for(int i=0;i<n;i++){
//		if(a[i]<min1){
//			min2=min1;
//			min1=a[i];
//		}
//		else if(a[i]<min2&&a[i]!=min1){
//			min2=a[i];
//		}
//	}
//	printf("%d %d",min1,min2);
}