#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min]){
				min=j;
			}	
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		for(int j=0;j<n;j++) printf("%d ",a[j]);
		printf("\n");
	}
}