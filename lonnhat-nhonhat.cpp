#include<stdio.h>

int main(){
	int n;
	int max=-1e9,min=1e9;
	while(scanf("%d",&n)!=-1){
		if(n>max) max=n;
		if(n<min) min=n;
	}
	printf("%d %d",max,min);
}