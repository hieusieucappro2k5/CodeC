#include<stdio.h>
#include<stdlib.h>

int sokhonggiam(int n){
	int a[9],num=0;
	while(n)
	{
		int k=n%10;
		a[num++]=k;
		n/=10;
	}
	for(int i=0;i<num-1;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}

int cmp(const void *a,const void *b)
{
	int x=*(int*)a;
	int y=*(int*)b;
	return y-x;
}

int main(){
	int x,a[100000],cnt1[100000]={0},cnt2[100000]={0},num=0;
	while(scanf("%d",&x)!=-1){
		if(sokhonggiam(x)) a[num++]=x;
	}
	for(int i=0;i<num;i++){
		cnt1[a[i]]++;
		cnt2[a[i]]++;
	}
	qsort(cnt2,100000,sizeof(int),cmp);
	for(int i=0;i<10;i++){
		for(int j=0;j<num;j++){
			if(cnt2[i]==cnt1[a[j]]){
				printf("%d %d",a[i],cnt2[i]);
			}
		}
	}
	
}