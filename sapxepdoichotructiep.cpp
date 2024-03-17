#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int ok=1;
	for(int i=0;i<n-1;i++)
	{	
		printf("Buoc %d: ",ok);
		ok++;
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		for(int j=0;j<n;j++) printf("%d ",a[j]);
		printf("\n");
	}
}