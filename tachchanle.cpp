#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		if(a[i]%2==0) printf("%d ",a[i]); 
	}
	printf("\n");
	for(int i=0;i<n;i++)
		if(a[i]%2) printf("%d ",a[i]);
}