#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
	int n;
	scanf("%d",&n); 
	int a[100];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int cnt=1;
	printf("Test %d\n",i);
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			cnt++;
		}
		else break;
	}
	printf("%d\n",cnt);
	for(int i=0;i<n;i+=cnt){
//		for(int j=i;j<cnt+i;j++){
		if(a[i]<a[i+1]&&a[i+1]<a[i+2]) printf("%d %d ",a[i]);

	}
	}
}