#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	int x=*(int *)a;
	int y=*(int *)b;
	return y-x;
}

int main(){
	int n;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
//	qsort(a,n,sizeof(int),cmp);
	for(int i=0,j=n-1;i<j;i++,j--) {
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}