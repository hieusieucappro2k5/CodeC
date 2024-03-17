#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);		
	for(int j=0;j<n;j++) 
		if(a[j]%2==0) printf("%d ",a[j]);
	printf("\n");
	for(int i=0;i<n;i++)
		if(a[i]%2) printf("%d ",a[i]);	

}