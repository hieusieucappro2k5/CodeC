#include<stdio.h>
int main(){
	int test ;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		int cnt[30000]={0};
		for(int i=0;i<n;i++) cnt[a[i]]++;
		int max=-1e9,num=0;
		for(int i=0;i<n;i++){
			if(cnt[a[i]]>max){
				max=cnt[a[i]];
			}
		}
		int b[10000]={0};
		for(int i=0;i<n;i++){
			if(cnt[a[i]]==max){
				b[num++]=a[i];
				cnt[a[i]]=0;
			}
		}
		for(int i=0;i<num;i++){
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}