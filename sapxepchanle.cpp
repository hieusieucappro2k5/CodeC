#include<stdio.h>
#include<stdlib.h>

int  cmp(const void *a,const void *b)
{
	int x=*(int*)a;	
	int y=*(int*)b;
	return x-y;
}
void print(int a[],int b){
	for(int i=0;i<b;i++) printf("%d ",a[i]);	
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	qsort (a,n,sizeof(int),cmp);
	int b[n] , c[n] , num1=0 , num2=0 ;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) b[num1++]=a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0) c[num2++]=a[i];
	}
	qsort(b,num1,sizeof(int),cmp);
	qsort(c,num2,sizeof(int),cmp);
	print(b,num1);
	print(c,num2);
//	printf("\n");
}