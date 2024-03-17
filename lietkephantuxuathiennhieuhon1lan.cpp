#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int cnt[10000]={0};
	int cnt1=0;
	for(int i=0;i<n;i++) cnt[a[i]]++;
	for(int i=0;i<10000;i++) if(cnt[i]>1) cnt1++;
	printf("%d\n",cnt1);
	for(int i=0;i<n;i++) {
		if(cnt[a[i]]>=2){
			printf("%d ",a[i]);
			cnt[a[i]]=0;
		}
	}
}