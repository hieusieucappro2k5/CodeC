#include<stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	for(int i=1;i<=test;i++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		int cnt[100000];
		for(int i=0;i<n;i++) cnt[a[i]]++;
		printf("Test %d:\n",i);
		for(int i=0;i<n;i++) {
			if(cnt[a[i]]){
				printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]);
				cnt[a[i]]=0;
			}
		}
	}
}